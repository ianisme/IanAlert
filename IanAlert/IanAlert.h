//
//  IanAlert.h
//  SVProgressHUD
//  loading弹窗
//  Created by ian on 14/11/27.
//
//

#import <Foundation/Foundation.h>

@interface IanAlert : NSObject

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

@end
