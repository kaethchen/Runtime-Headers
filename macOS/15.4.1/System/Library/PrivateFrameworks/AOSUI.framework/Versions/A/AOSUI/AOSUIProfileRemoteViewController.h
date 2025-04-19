@protocol AOSUIProfileRemoteViewControllerDelegate;

@interface AOSUIProfileRemoteViewController : NSRemoteViewController <AOSUIProfileViewHostDelegate>

@property (weak, nonatomic) id<AOSUIProfileRemoteViewControllerDelegate> delegate;

+ (void)requestViewControllerWithCompletion:(id /* block */)a0;

- (void).cxx_destruct;
- (id)exportedInterface;
- (id)serviceViewControllerInterface;
- (void)viewHost_updateOverlayPrefPane:(BOOL)a0 prefPanesToHide:(id)a1;

@end
