@class NSExtensionContext;

@interface ScreenSaverConfigurationViewController : NSServiceViewController

@property (retain) NSExtensionContext *extensionContext;

- (void)dealloc;
- (unsigned long long)awakeFromRemoteView;
- (void)configureSheetDidEnd;
- (void)configureSheetWillPresent;

@end
