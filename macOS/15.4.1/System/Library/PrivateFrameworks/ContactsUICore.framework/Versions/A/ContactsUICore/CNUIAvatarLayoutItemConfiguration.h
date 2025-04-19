@protocol CNGroupAvatarLayerLayoutDelegate;

@interface CNUIAvatarLayoutItemConfiguration : NSObject

@property (nonatomic) double size;
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double baseSize;
@property (weak, nonatomic) id<CNGroupAvatarLayerLayoutDelegate> layoutDelegate;

- (void).cxx_destruct;
- (id)initWithSize:(double)a0 x:(double)a1 y:(double)a2 baseSize:(double)a3;
- (id)initWithSize:(double)a0 x:(double)a1 y:(double)a2 baseSize:(double)a3 withLayoutDelegate:(id)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })itemFrameInContainingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isRTL:(BOOL)a1;
- (void)updateLayer:(id)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 atIndex:(long long)a2 isRTL:(BOOL)a3;

@end
