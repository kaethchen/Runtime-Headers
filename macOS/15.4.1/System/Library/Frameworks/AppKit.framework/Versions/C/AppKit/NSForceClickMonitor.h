@class NSEvent;

@interface NSForceClickMonitor : NSObject {
    double _maxProgress;
    struct CGPoint { double x; double y; } _startLocation;
    struct CGPoint { double x; double y; } _location;
    NSEvent *_startEvent;
    double _animationStartTime;
    struct { unsigned char _firstEventProcessed : 1; unsigned int _reserved : 31; } _flags;
}

@property (class, readonly) BOOL forceClickUserPreferencesEnabled;

@property long long state;
@property double progress;
@property double allowableMovement;
@property (weak) id target;
@property SEL action;

+ (BOOL)_forceClickPossibleFromEvent:(id)a0 respectUserPreferences:(BOOL)a1;
+ (void)_lookupStyleSettingDidChangeNotification:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })location;
- (void)cancel;
- (id)_initWithEvent:(id)a0 ignoreForceClickSystemPreferences:(BOOL)a1;
- (void)firstMouseEvent:(id)a0;
- (id)initWithEvent:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (void)pressureChangeWithEvent:(id)a0;
- (void)sendEvent:(id)a0;

@end
