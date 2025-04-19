@class NSString, AXFMouseCursorImage;

@interface AXFMouseTest : NSObject <AXFMouseDelegate>

@property (nonatomic) struct CGPoint { double x; double y; } currentLocation;
@property (nonatomic) double cursorScale;
@property (retain, nonatomic) AXFMouseCursorImage *cursorImage;
@property (nonatomic) long long currentDownButton;
@property (nonatomic) BOOL keepCursorImageSynchronizedWithSystem;
@property (readonly, nonatomic) struct CGSize { double width; double height; } cursorImageSize;
@property (nonatomic) BOOL accumulateClickCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)moveToLocation:(struct CGPoint { double x0; double x1; })a0 delta:(struct CGSize { double x0; double x1; })a1 eventType:(unsigned long long)a2;
- (void)moveToLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)clickButton:(long long)a0 count:(unsigned long long)a1;
- (void)clickButton:(long long)a0 count:(unsigned long long)a1 withModifiers:(unsigned long long)a2;
- (void)clickButton:(long long)a0 count:(unsigned long long)a1 withModifiers:(unsigned long long)a2 markupHandler:(id /* block */)a3;
- (void)hideCursor;
- (void)moveToLocation:(struct CGPoint { double x0; double x1; })a0 delta:(struct CGSize { double x0; double x1; })a1 eventType:(unsigned long long)a2 markupHandler:(id /* block */)a3;
- (void)moveToLocation:(struct CGPoint { double x0; double x1; })a0 delta:(struct CGSize { double x0; double x1; })a1 markupHandler:(id /* block */)a2;
- (void)moveToLocation:(struct CGPoint { double x0; double x1; })a0 eventType:(unsigned long long)a1 markupHandler:(id /* block */)a2;
- (void)moveToLocation:(struct CGPoint { double x0; double x1; })a0 markupHandler:(id /* block */)a1;
- (void)performMouseAction:(long long)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
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
