@class PXPhotosLayoutState;

@interface PXPhotosLayoutAnimationContext : NSObject <NSCopying>

@property (retain, nonatomic) PXPhotosLayoutState *fromState;
@property (retain, nonatomic) PXPhotosLayoutState *toState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
