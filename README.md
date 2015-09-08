IanAlert
========

### 说明：
- 请star Github 以保证获得最新的代码
- https://github.com/ianisme/IanAlert
- 集成了最新版本的SVProgressHUD,首先要感谢原作者,给我们这么强大的一个库.本库集成了loading动画和Alert弹窗以及模态选项,使用起来比较方便.

### 功能如下：

- 1.弹出UIAlertView 标题 内容 确定按钮事件 取消按钮事件
- 2.弹出UIAlertView 标题 内容
- 3.弹出UIAlertView 标题 内容 确定按钮事件
- 4.弹出错误提示
- 5.弹出错误提示(自定义消失时间)
- 6.弹出成功提示
- 7.弹出成功提示(自定义消失时间)
- 8.弹出等待loading动画
- 9.弹出等待loading动画(是否允许用户点击)
- 10.弹出等待loading动画+文字
- 11.弹出等待loading动画+文字(是否允许用户点击)
- 12.隐藏loading
- 13.隐藏loading 并在完成之后发送消息

### 效果演示：
<img src="https://coding.net/u/ianisme/p/IanAlert/git/raw/master/Demo.gif"  alt="效果展示by ian" height="568" width="320" />

### 接口：
```
// 弹出UIAlertView 标题 内容 确定按钮事件 取消按钮事件

+(void)confirmWithTitle:(NSString *)title message:(NSString *)message yes:(NSString *)yes actionYes:(void(^)(void))actionYes andno:(NSString *)no actionNo:(void(^)(void))actionNo;

// 弹出UIAlertView 标题 内容

+(void)alertWithTitle:(NSString *)title message:(NSString *)message;

// 弹出UIAlertView 标题 内容 确定按钮事件

+(void)alertWithTitle:(NSString *)title message:(NSString *)message yes:(NSString *)yes confirm:(void(^)())confirm;

// 弹出错误提示

+(void)alertError:(NSString *)string;

// 弹出错误提示(自定义消失时间)

+(void)alertError:(NSString *)string length:(NSTimeInterval)length;

// 弹出成功提示

+(void)alertSuccess:(NSString *)string;

// 弹出成功提示(自定义消失时间)

+(void)alertSuccess:(NSString *)string length:(NSTimeInterval)length;

// 弹出等待loading动画

+(void)showloading;

// 弹出等待loading动画(是否允许用户点击)

+(void)showloadingAllowUserInteraction:(BOOL)allowUserInteraction;

// 弹出等待loading动画+文字

+(void)showLoading:(NSString *)string;

// 弹出等待loading动画+文字(是否允许用户点击)

+(void)showLoading:(NSString *)string allowUserInteraction:(BOOL)allowUserInteraction;

// 隐藏loading

+(void)hideLoading;

// 隐藏loading 并在完成之后发送消息

+(void)hideLoading:(void(^)(BOOL finished))completion;
```