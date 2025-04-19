@class NSViewController;
@protocol REMReminderCreationPublicViewController, REMReminderCreationViewServiceViewController;

@interface REMReminderCreationRemoteViewController : NSRemoteViewController <REMReminderCreationRemoteViewController>

@property (weak, nonatomic) NSViewController<REMReminderCreationPublicViewController> *publicViewController;
@property (readonly, nonatomic, getter=viewServiceViewController) id<REMReminderCreationViewServiceViewController> viewServiceViewController;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)viewHostDidDismiss;
- (void)viewServiceDidCancel;
- (void)viewServiceDidFailWithError:(id)a0;
- (void)viewServiceDidFinish;
- (void)viewServicePreferredSizeDidChange:(struct CGSize { double x0; double x1; })a0;

@end
