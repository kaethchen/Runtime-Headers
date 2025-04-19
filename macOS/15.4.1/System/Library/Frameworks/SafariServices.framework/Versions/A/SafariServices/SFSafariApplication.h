@interface SFSafariApplication : NSObject

+ (void)dispatchMessageWithName:(id)a0 toExtensionWithIdentifier:(id)a1 userInfo:(id)a2 completionHandler:(id /* block */)a3;
+ (void)getActiveWindowWithCompletionHandler:(id /* block */)a0;
+ (void)getAllWindowsWithCompletionHandler:(id /* block */)a0;
+ (void)getHostApplicationWithCompletionHandler:(id /* block */)a0;
+ (void)openWindowWithURL:(id)a0 completionHandler:(id /* block */)a1;
+ (void)setToolbarItemsNeedUpdate;
+ (void)showPreferencesForExtensionWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
