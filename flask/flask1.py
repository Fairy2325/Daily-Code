from flask import Flask, request, render_template
import json

app = Flask(__name__)


@app.route('/')
def hello_world():  # put application's code here
    return 'Hello!'


@app.route('/covscript')
def hello_Covscript():  # put application's code here
    return 'Hello Covscript!'

@app.route('/login',methods=["GET", "POST"])
def login():
    print('request.method:\n', request.method)
    print('request.data:\n', request.data)
    print('request.request.args:\n', request.args)
    print("request.request.args.get('b'):\n", request.args.get('c'))
    print('request.form:\n', request.form)
    print("request.request.form.get('password'):\n", request.form.get('password'))
    print('request.values:\n', request.values)
    print('request.json:\n', request.json)
    print('request.cookies:\n', request.cookies)
    print('request.headers:\n', request.headers)
    return json.dumps(request.form)  # 将MultiDict数据处理为JSON数据

if __name__ == '__main__':
    app.run()
