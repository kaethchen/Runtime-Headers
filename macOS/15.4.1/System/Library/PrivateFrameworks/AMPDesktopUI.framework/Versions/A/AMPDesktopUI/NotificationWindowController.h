@class NotificationListener;

@interface NotificationWindowController : NSWindowController

@property (nonatomic, readonly) BOOL windowLoaded;
@property (retain, nonatomic) NotificationListener *listener;
@property (nonatomic) BOOL windowIsActuallyLoaded;

- (void).cxx_destruct;
- (BOOL)isWindowLoaded;
- (void)loadWindow;
- (void)windowDidLoad;

@end
