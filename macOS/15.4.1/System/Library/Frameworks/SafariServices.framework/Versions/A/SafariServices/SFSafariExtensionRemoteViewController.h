@class NSPopover;
@protocol SFSafariExtensionRemoteViewControllerDelegate;

@interface SFSafariExtensionRemoteViewController : NSRemoteViewController

@property (weak, nonatomic) id<SFSafariExtensionRemoteViewControllerDelegate> delegate;
@property (weak, nonatomic) NSPopover *popover;

- (void).cxx_destruct;
- (id)serviceViewControllerInterface;
- (void)viewServiceDidTerminateWithError:(id)a0;

@end
