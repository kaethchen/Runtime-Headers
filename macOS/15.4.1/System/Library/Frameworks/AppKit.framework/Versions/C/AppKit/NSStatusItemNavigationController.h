@class NSStatusItem;

@interface NSStatusItemNavigationController : NSObject {
    NSStatusItem *_statusItem;
    struct { unsigned int theftID; id eventMonitorToken; } _keyThief;
    struct { unsigned char navigationByKeyboard : 1; unsigned char navigationByRollover : 1; unsigned char navigationMenuRevealed : 1; unsigned char keyThiefActive : 1; unsigned int reserved : 28; } _flags;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_cleanupKeyThief;
- (BOOL)_trackKeyboardNavigation;
- (void)endNavigation;
- (void)handleCtrlF8;
- (id)initWithStatusItem:(id)a0;
- (BOOL)isNavigating;
- (void)menuKeyNavigateLeft;
- (void)menuKeyNavigateRight;
- (void)navigateLeft;
- (void)navigateRight;
- (void)navigationChangedWithOptions:(unsigned int)a0;
- (unsigned int)navigationOptions;

@end
