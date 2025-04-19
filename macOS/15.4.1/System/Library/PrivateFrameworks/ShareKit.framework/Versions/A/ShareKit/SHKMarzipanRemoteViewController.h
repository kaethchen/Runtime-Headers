@class SHKRemoteWindowController, NSArray;

@interface SHKMarzipanRemoteViewController : NSRemoteViewController

@property BOOL disconnectRequested;
@property (weak) SHKRemoteWindowController *remoteWindowController;
@property (retain) NSArray *layoutConstraints;

+ (BOOL)viewShouldDragOldestAncestorWindow;
+ (void)requestMarzipanViewControllerForExtensionWithIdentifier:(id)a0 fromServiceWithBundleIdentifier:(id)a1 connectionHandler:(id /* block */)a2;

- (void).cxx_destruct;
- (void)disconnect;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewServiceDidTerminateWithError:(id)a0;

@end
