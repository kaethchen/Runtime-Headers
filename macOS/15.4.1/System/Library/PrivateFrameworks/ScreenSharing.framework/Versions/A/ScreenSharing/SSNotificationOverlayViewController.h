@class SSReconnectProgressIndicator, NSImageView, NSTextField;

@interface SSNotificationOverlayViewController : NSViewController

@property (retain) SSReconnectProgressIndicator *progressIndicator;
@property double defaultFillColorAlpha;
@property double defaultImageAlpha;
@property NSImageView *notificationImageView;
@property NSTextField *notificationLabelView;

- (void)dealloc;
- (id)init;
- (void)viewDidLoad;
- (void)setImageAlpha:(double)a0;
- (void)setProgressSpinner:(BOOL)a0;
- (double)defaultFillColorAlphaValue;
- (double)defaultImageAlphaValue;
- (void)setFillColorWithAlpha:(double)a0;

@end
