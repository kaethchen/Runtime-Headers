@class NSString;

@interface STBlockingRemoteViewController : NSRemoteViewController <STBlockingViewServiceDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (void)requestOpaqueBlockingViewControllerWithBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)requestTranslucentBlockingViewControllerWithBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (id)serviceViewControllerInterface;
+ (void)requestBlockingViewControllerWithBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;

- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)blockingViewControllerDidFinishDismissalAnimationWithReplyHandler:(id /* block */)a0;

@end
