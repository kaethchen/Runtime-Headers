@class BUIViewController;

@interface BUIBatteryObserver : NSObject

@property (retain) BUIViewController *viewController;
@property (copy) id /* block */ observerBlock;
@property struct __CFRunLoopSource { } *runLoopSourceRef;

+ (id)createPMObserverWithBlock:(id /* block */)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)refreshUI;
- (id)_menuBarStringWithSourceState:(struct BUIPowerSourceTypeStruct { long long x0; long long x1; long long x2; long long x3; long long x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; double x15; })a0;
- (void)_update:(BOOL)a0;

@end
