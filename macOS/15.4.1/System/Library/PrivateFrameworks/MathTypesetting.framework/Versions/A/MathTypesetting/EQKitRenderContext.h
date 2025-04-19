@class EQKitSelection;

@interface EQKitRenderContext : NSObject

@property (readonly, nonatomic) struct CGContext { } *cgContext;
@property (nonatomic) struct CGColor { } *highlightColor;
@property (nonatomic) BOOL rendersDebugRects;
@property (retain, nonatomic) EQKitSelection *selection;

- (void)dealloc;
- (id)initWithCGContext:(struct CGContext { } *)a0;

@end
