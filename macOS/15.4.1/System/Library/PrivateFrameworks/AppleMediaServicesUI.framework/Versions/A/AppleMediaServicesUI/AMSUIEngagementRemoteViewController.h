@class NSValue, NSString;
@protocol AMSUIEngagementTaskHostInterface, AMSUIEngagementTaskRemoteInterface;

@interface AMSUIEngagementRemoteViewController : NSRemoteViewController <AMSUIEngagementTaskHostInterface>

@property (retain) NSValue *internalPreferredContentSizeOverride;
@property (weak) id<AMSUIEngagementTaskHostInterface> delegate;
@property struct CGSize { double x0; double x1; } preferredContentSizeOverride;
@property (readonly) id<AMSUIEngagementTaskRemoteInterface> remoteProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)engagementTaskDidFinishWithResult:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)preferredContentSizeDidChange:(struct CGSize { double x0; double x1; })a0;

@end
