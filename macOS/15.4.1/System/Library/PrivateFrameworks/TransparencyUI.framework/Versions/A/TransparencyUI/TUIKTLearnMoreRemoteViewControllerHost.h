@class NSString, TUIKTLearnMoreViewController;

@interface TUIKTLearnMoreRemoteViewControllerHost : NSRemoteViewController <TUIKTLearnMoreRemoteViewControllerHostProtocol>

@property (retain, nonatomic) TUIKTLearnMoreViewController *hostViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)exportedInterface;
- (void)loadView;
- (id)serviceViewControllerInterface;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)privacySheetDidDismissWithError:(id)a0 reply:(id /* block */)a1;

@end
