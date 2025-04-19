@class NSWindow, NSArray, NSMutableArray, NSScreen;

@interface NSWindowSidecarMenuController : NSObject

@property (retain) NSMutableArray *targetScreens;
@property (retain) NSArray *targetIPads;
@property (retain) NSScreen *iPadScreen;
@property (weak) NSWindow *window;
@property (retain) id screenNotificationToken;
@property (readonly) BOOL isOnIPad;

+ (id)_filterDevices:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_toggleIPad:(id)a0;
- (id)imageForIPad:(id)a0;
- (id)labelForIPad:(id)a0 isSubmenu:(BOOL)a1;
- (void)moveToIPad:(id)a0;
- (void)reloadData;
- (void)requestZoomToDisplayID:(long long)a0;
- (BOOL)zoomToScreenWithDisplayID:(long long)a0;

@end
