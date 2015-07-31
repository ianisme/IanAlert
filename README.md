IanAlert
========

<p class="p1"><span class="s1">A<span class="Apple-converted-space">  </span>HUD and a alertView for your iOS app(</span><span class="s2">集成</span><span class="s1">loading</span><span class="s2">动画和</span><span class="s1">Alert</span><span class="s2">弹窗</span><span class="s1">)</span></p>
<p class="p3"><span class="s1">说明</span><span class="s3">:</span><span class="s1">集成了最新版本的</span><span class="s3">SVProgressHUD,</span><span class="s1">首先要感谢原作者</span><span class="s3">,</span><span class="s1">给我们这么强大的一个库</span><span class="s3">.</span><span class="s1">本库集成了</span><span class="s3">loading</span><span class="s1">动画和</span><span class="s3">Alert</span><span class="s1">弹窗以及模态选项</span><span class="s3">,</span><span class="s1">使用起来比较方便</span><span class="s3">.</span></p>
<p class="p3"><span class="s1">接口</span><span class="s3">:</span></p>
<p class="p1"><span class="s1">// </span><span class="s2">弹出</span><span class="s1">UIAlertView </span><span class="s2">标题</span> <span class="s2">内容</span> <span class="s2">确定按钮事件</span> <span class="s2">取消按钮事件</span></p>
<p class="p1"><span class="s1">+(void)confirmWithTitle:(NSString *)title message:(NSString *)message yes:(NSString *)yes actionYes:(void(^)(void))actionYes andno:(NSString *)no actionNo:(void(^)(void))actionNo;</span></p>
<p class="p1"><span class="s1">// </span><span class="s2">弹出</span><span class="s1">UIAlertView </span><span class="s2">标题</span> <span class="s2">内容</span></p>
<p class="p1"><span class="s1">+(void)alertWithTitle:(NSString *)title message:(NSString *)message;</span></p>
<p class="p1"><span class="s1">// </span><span class="s2">弹出</span><span class="s1">UIAlertView </span><span class="s2">标题</span> <span class="s2">内容</span> <span class="s2">确定按钮事件</span></p>
<p class="p1"><span class="s1">+(void)alertWithTitle:(NSString *)title message:(NSString *)message yes:(NSString *)yes confirm:(void(^)())confirm;</span></p>
<p class="p3"><span class="s3">// </span><span class="s1">弹出错误提示</span></p>
<p class="p1"><span class="s1">+(void)alertError:(NSString *)string;</span></p>
<p class="p3"><span class="s3">// </span><span class="s1">弹出错误提示</span><span class="s3">(</span><span class="s1">自定义消失时间</span><span class="s3">)</span></p>
<p class="p1"><span class="s1">+(void)alertError:(NSString *)string length:(NSTimeInterval)length;</span></p>
<p class="p3"><span class="s3">// </span><span class="s1">弹出成功提示</span></p>
<p class="p1"><span class="s1">+(void)alertSuccess:(NSString *)string;</span></p>
<p class="p3"><span class="s3">// </span><span class="s1">弹出成功提示</span><span class="s3">(</span><span class="s1">自定义消失时间</span><span class="s3">)</span></p>
<p class="p1"><span class="s1">+(void)alertSuccess:(NSString *)string length:(NSTimeInterval)length;</span></p>
<p class="p1"><span class="s1">// </span><span class="s2">弹出等待</span><span class="s1">loading</span><span class="s2">动画</span></p>
<p class="p1"><span class="s1">+(void)showloading;</span></p>
<p class="p3"><span class="s3">// </span><span class="s1">弹出等待</span><span class="s3">loading</span><span class="s1">动画</span><span class="s3">(</span><span class="s1">是否允许用户点击</span><span class="s3">)</span></p>
<p class="p1"><span class="s1">+(void)showloadingAllowUserInteraction:(BOOL)allowUserInteraction;</span></p>
<p class="p1"><span class="s1">// </span><span class="s2">弹出等待</span><span class="s1">loading</span><span class="s2">动画</span><span class="s1">+</span><span class="s2">文字</span></p>
<p class="p1"><span class="s1">+(void)showLoading:(NSString *)string;</span></p>
<p class="p3"><span class="s3">// </span><span class="s1">弹出等待</span><span class="s3">loading</span><span class="s1">动画</span><span class="s3">+</span><span class="s1">文字</span><span class="s3">(</span><span class="s1">是否允许用户点击</span><span class="s3">)</span></p>
<p class="p1"><span class="s1">+(void)showLoading:(NSString *)string allowUserInteraction:(BOOL)allowUserInteraction;</span></p>
<p class="p1"><span class="s1">// </span><span class="s2">隐藏</span><span class="s1">loading</span></p>
<p class="p1"><span class="s1">+(void)hideLoading;</span></p>
<p class="p3"><span class="s3">// </span><span class="s1">隐藏</span><span class="s3">loading </span><span class="s1">并在完成之后发送消息</span></p>

<p class="p1"><span class="s1">+(void)hideLoading:(void(^)(BOOL finished))completion;</span></p>