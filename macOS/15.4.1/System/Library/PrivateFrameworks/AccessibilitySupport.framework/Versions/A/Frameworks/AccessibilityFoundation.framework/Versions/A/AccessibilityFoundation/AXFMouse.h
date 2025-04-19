@class NSString, AXFMouseCursorImage, _AXFMouseHardware;
@protocol AXFMouseDelegate;

@interface AXFMouse : NSObject <AXFMouseDelegate>

@property (class, readonly, nonatomic) AXFMouse *shared;

@property (retain, nonatomic) _AXFMouseHardware *_hardware;
@property (weak, nonatomic) id<AXFMouseDelegate> delegate;
@property (nonatomic) struct CGPoint { double x0; double x1; } currentLocation;
@property (nonatomic) double cursorScale;
@property (nonatomic) BOOL keepCursorImageSynchronizedWithSystem;
@property (readonly, nonatomic) AXFMouseCursorImage *cursorImage;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } cursorImageSize;
@property (readonly, nonatomic) long long currentDownButton;
@property (nonatomic) BOOL accumulateClickCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)mouse;
+ (id)cursorImageForSystemCursorType:(unsigned long long)a0;
+ (id)cursorImageForCurrentCursor;
+ (id)cursorImageForCursorName:(id)a0;
+ (id)cursorImageForCursorType:(int)a0;

- (id)init;
- (void).cxx_destruct;
- (void)moveToLocation:(struct CGPoint { double x0; double x1; })a0 delta:(struct CGSize { double x0; double x1; })a1 eventType:(unsigned long long)a2;
- (void)moveToLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)clickButton:(long long)a0 count:(unsigned long long)a1;
- (void)clickButton:(long long)a0 count:(unsigned long long)a1 withModifiers:(unsigned long long)a2;
- (void)clickButton:(long long)a0 count:(unsigned long long)a1 withModifiers:(unsigned long long)a2 markupHandler:(id /* block */)a3;
- (void)hideCursor;
- (void)moveMouseToElement:(id)a0;
- (void)moveMouseToElement:(id)a0 andClickButton:(long long)a1 count:(unsigned long long)a2 withModifiers:(unsigned long long)a3;
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
