@class RPBroadcastActivityViewController;

@interface RPBroadcastActivityHostViewController : NSRemoteViewController <RPBroadcastActivityCommunicationHostProtocol>

@property (weak, nonatomic) RPBroadcastActivityViewController *broadcastActivityViewController;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (oneway void)extensionDidFinishWithLaunchURL:(id)a0 broadcastURL:(id)a1 extensionBundleID:(id)a2 cancelled:(BOOL)a3;

@end
