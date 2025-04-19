@class AVDesktopPlaybackControlsController;
@protocol AVTouchBarControlsViewControllerDelegate;

@interface AVTouchBarControlsViewController : NSViewController <AVDesktopPlaybackControlsControllerClient>

@property (weak, nonatomic) id<AVTouchBarControlsViewControllerDelegate> delegate;
@property (weak, nonatomic) AVDesktopPlaybackControlsController *playbackControlsController;

- (void).cxx_destruct;
- (void)viewDidDisappear;
- (void)viewWillAppear;

@end
