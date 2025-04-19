@class NSTimer, AXFMouseCursorImage, NSString;

@interface _AXFMouseHardware : NSObject <AXFMouseDelegate> {
    struct __CGEventSource { } *__eventSource;
}

@property (retain, nonatomic) AXFMouseCursorImage *cursorImage;
@property (nonatomic) long long currentDownButton;
@property (nonatomic) unsigned int _cgsConnectionID;
@property (nonatomic) unsigned long long _currentDownButtonClickCount;
@property (nonatomic) unsigned long long _currentModifierFlags;
@property (nonatomic) unsigned int _currentCursorSeed;
@property (nonatomic) unsigned int _currentSystemCursorSeed;
@property (retain, nonatomic) NSTimer *_cursorTypeUpdateTimer;
@property (nonatomic) struct CGPoint { double x; double y; } _lastMouseButtonPressLocation;
@property (nonatomic) struct CGPoint { double x0; double x1; } currentLocation;
@property (nonatomic) double cursorScale;
@property (nonatomic) BOOL keepCursorImageSynchronizedWithSystem;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } cursorImageSize;
@property (nonatomic) BOOL accumulateClickCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_cursorImageIfChanged;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)moveToLocation:(struct CGPoint { double x0; double x1; })a0 delta:(struct CGSize { double x0; double x1; })a1 eventType:(unsigned long long)a2;
- (void)moveToLocation:(struct CGPoint { double x0; double x1; })a0;
- (long long)_buttonForAction:(long long)a0;
- (unsigned long long)_buttonPressCountForAction:(long long)a0;
- (struct __CGEventSource { } *)_eventSource;
- (void)_mouseSettingsChanged:(id)a0;
- (void)_postEventRef:(struct __CGEvent { } *)a0 markupHandler:(id /* block */)a1;
- (void)_pressButton:(long long)a0 count:(unsigned long long)a1 withModifiers:(unsigned long long)a2 markupHandler:(id /* block */)a3;
- (void)_releaseButton:(long long)a0 count:(unsigned long long)a1 withModifiers:(unsigned long long)a2 markupHandler:(id /* block */)a3;
- (void)_resetModifierState;
- (BOOL)_shouldDelayBetweenMouseDownAndUp;
- (void)_updateCursorTimer;
- (void)clickButton:(long long)a0 count:(unsigned long long)a1;
- (void)clickButton:(long long)a0 count:(unsigned long long)a1 withModifiers:(unsigned long long)a2;
- (void)clickButton:(long long)a0 count:(unsigned long long)a1 withModifiers:(unsigned long long)a2 markupHandler:(id /* block */)a3;
- (void)hideCursor;
- (void)moveToLocation:(struct CGPoint { double x0; double x1; })a0 delta:(struct CGSize { double x0; double x1; })a1 eventType:(unsigned long long)a2 markupHandler:(id /* block */)a3;
- (void)moveToLocation:(struct CGPoint { double x0; double x1; })a0 delta:(struct CGSize { double x0; double x1; })a1 markupHandler:(id /* block */)a2;
- (void)moveToLocation:(struct CGPoint { double x0; double x1; })a0 eventType:(unsigned long long)a1 markupHandler:(id /* block */)a2;
- (void)moveToLocation:(struct CGPoint { double x0; double x1; })a0 markupHandler:(id /* block */)a1;
- (void)performMouseAction:(long long)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 markupHandler:(id /* block */)a2 withCompletion:(id /* block */)a3;
- (void)performMouseAction:(long long)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 withCompletion:(id /* block */)a2;
- (void)pressButton:(long long)a0;
- (void)pressButton:(long long)a0 withModifiers:(unsigned long long)a1;
- (void)pressButton:(long long)a0 withModifiers:(unsigned long long)a1 markupHandler:(id /* block */)a2;
- (void)releaseButton:(long long)a0;
- (void)releaseButton:(long long)a0 markupHandler:(id /* block */)a1;
- (void)scrollWheelByDelta:(struct CGPoint { double x0; double x1; })a0 unit:(unsigned int)a1;
- (void)scrollWheelByDelta:(struct CGPoint { double x0; double x1; })a0 unit:(unsigned int)a1 atLocation:(struct CGPoint { double x0; double x1; })a2 markupHandler:(id /* block */)a3;
- (void)scrollWheelByDelta:(struct CGPoint { double x0; double x1; })a0 unit:(unsigned int)a1 markupHandler:(id /* block */)a2;
- (void)setCursorType:(int)a0;
- (void)setSystemCursorType:(unsigned long long)a0;
- (void)showCursor;

@end
