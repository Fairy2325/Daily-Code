import pygame
import random

# 定义方向常量
UP = 0
DOWN = 1
LEFT = 2
RIGHT = 3

# 定义颜色常量
BLACK = (0, 0, 0)
WHITE = (255, 255, 255)
RED = (255, 0, 0)

# 初始化Pygame
pygame.init()

# 设置游戏窗口大小和标题
display_width = 800
display_height = 600
game_display = pygame.display.set_mode((display_width, display_height))
pygame.display.set_caption('贪吃蛇')

# 设置时钟
clock = pygame.time.Clock()

# 定义贪吃蛇块的大小和间隔
block_size = 10
block_gap = 3

# 定义两个字体，用于显示得分和游戏结束的提示
font_small = pygame.font.SysFont(None, 25)
font_large = pygame.font.SysFont(None, 50)

# 定义函数，用于显示得分
def show_score(score):
    score_text = font_small.render('得分：' + str(score), True, WHITE)
    game_display.blit(score_text, [0, 0])

# 定义函数，用于显示游戏结束的提示
def game_over():
    over_text = font_large.render('游戏结束', True, RED)
    game_display.blit(over_text, [display_width/2-120, display_height/2-50])
    pygame.display.update()
    pygame.time.delay(2000)

# 定义函数，用于画贪吃蛇
def draw_snake(snake_list):
    for block in snake_list:
        pygame.draw.rect(game_display, WHITE, [block[0], block[1], block_size, block_size])

# 定义函数，用于运行游戏循环
def game_loop():
    # 初始化贪吃蛇和食物位置
    snake_head = [display_width/2, display_height/2]
    snake_list = [snake_head]
    snake_direction = random.choice([UP, DOWN, LEFT, RIGHT])
    food = [random.randrange(0, display_width-block_size-block_gap, block_size+block_gap),
            random.randrange(0, display_height-block_size-block_gap, block_size+block_gap)]

    # 定义得分计数器和速度
    score = 0
    speed = 10

    # 进入游戏循环
    game_exit = False
    while not game_exit:
        # 处理事件
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                game_exit = True
            elif event.type == pygame.KEYDOWN:
                if event.key == pygame.K_UP and snake_direction != DOWN:
                    snake_direction = UP
                elif event.key == pygame.K_DOWN and snake_direction != UP:
                    snake_direction = DOWN
                elif event.key == pygame.K_LEFT and snake_direction != RIGHT:
                    snake_direction = LEFT
                elif event.key == pygame.K_RIGHT and snake_direction != LEFT:
                    snake_direction = RIGHT

        # 移动贪吃蛇
        if snake_direction == UP:
            snake_head[1] -= (block_size + block_gap)
        elif snake_direction == DOWN:
            snake_head[1] += (block_size + block_gap)
        elif snake_direction == LEFT:
            snake_head[0] -= (block_size + block_gap)
        elif snake_direction == RIGHT:
            snake_head[0] += (block_size + block_gap)

        # 判断是否吃到食物
        if snake_head[0] == food[0] and snake_head[1] == food[1]:
            score += 1
            speed += 1
            food = [random.randrange(0, display_width-block_size-block_gap, block_size+block_gap),
                    random.randrange(0, display_height-block_size-block_gap, block_size+block_gap)]
            snake_list.append([800,600])
        else:
            snake_list.pop(0)

        # 判断是否碰到边界或自身
        if snake_head[0] < 0 or snake_head[0] >= display_width or \
           snake_head[1] < 0 or snake_head[1] >= display_height or \
           snake_head in snake_list:
            game_over()
            game_exit = True

        # 更新贪吃蛇列表
        snake_list.append(list(snake_head))

        # 渲染游戏画面
        game_display.fill(BLACK)
        pygame.draw.rect(game_display, RED, [food[0], food[1], block_size, block_size])
        draw_snake(snake_list)
        show_score(score)
        pygame.display.update()

        # 控制游戏速度
        clock.tick(speed)

    # 退出Pygame
    pygame.quit()
    quit()

# 运行游戏循环
game_loop()