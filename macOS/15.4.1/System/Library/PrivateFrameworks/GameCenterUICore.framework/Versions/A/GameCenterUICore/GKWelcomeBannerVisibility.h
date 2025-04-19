@class NSWindow;

@interface GKWelcomeBannerVisibility : NSObject

@property (weak, nonatomic) NSWindow *mainWindow;
@property (nonatomic) BOOL isShowingRemoteUI;
@property (nonatomic) BOOL canShowBanner;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (void)applicationDidHide:(id)a0;
- (void)windowDidMiniaturize:(id)a0;

@end
