@class NSArray, NSString, NSExtension, RPBroadcastActivityViewServiceExtensionHostContext;
@protocol RPBroadcastActivityHostRemoteNSViewControllerDelegate;

@interface RPBroadcastActivityHostRemoteNSViewController : NSRemoteViewController <RPBroadcastActivityViewServiceHostProtocol>

@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) NSArray *inputItems;
@property (retain, nonatomic) RPBroadcastActivityViewServiceExtensionHostContext *hostContext;
@property (weak, nonatomic) id<RPBroadcastActivityHostRemoteNSViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)instantiateViewControllerWithExtension:(id)a0 inputItems:(id)a1 connectionHandler:(id /* block */)a2;

- (void).cxx_destruct;
- (void)loadView;
- (id)serviceViewControllerInterface;
- (void)viewDidLoad;
- (oneway void)extensionDidFinishWithLaunchURL:(id)a0 broadcastURL:(id)a1 extensionBundleID:(id)a2 cancelled:(BOOL)a3;
- (oneway void)presentBroadcastActivitySheet;

@end
