@interface ConfirmPageUnloadWithPIPVideoUtilities : NSObject

+ (id)_actionButtonTitleForReason:(long long)a0;
+ (id)_createAlertForPageUnloadReason:(long long)a0;
+ (id)_informativeTextForReason:(long long)a0;
+ (id)_messageTextForReason:(long long)a0;
+ (void)confirmPageUnloadInBrowserContentViewController:(id)a0 reason:(long long)a1 completionHandler:(id /* block */)a2;
+ (void)confirmSwitchTabGroupWithBrowserWindowController:(id)a0 completionHandler:(id /* block */)a1;
+ (BOOL)modallyConfirmPageUnloadInBrowserContentViewController:(id)a0 reason:(long long)a1;
+ (id)pageWithVideoInPIPInBrowserTabs:(id)a0;
+ (BOOL)shouldConfirmUnloadingPageWithBrowserContentViewController:(id)a0;

@end
