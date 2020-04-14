# js
## 面向对象
可以把JavaScript对象想象成一个散列表，无非就是一组名值对，值可以是数据或者函数

每个对象是基于一个引用类型创建的

```javascript
//通常写法
var person = new Object();
person.name = "Nicholas";
person.age = 29;
person.job = "Software Engineer";

person.sayName = function(){
  console.log(this.name);
}
//对象字面量
var person = {
  name: "Nicholas",
  age: 29,
  job: "Software Engineer",

  sayName: function(){
    console.log(this.name);
  }
}
```

```javascript







```

























































































eof

