@class UXCollectionViewLayoutAttributes, UXCollectionReusableView, NSMutableArray;

@interface UXCollectionViewAnimation : NSObject {
    NSMutableArray *_completionHandlers;
    NSMutableArray *_startupHandlers;
    id /* block */ _animationBlock;
    struct { unsigned char animateFromCurrentPosition : 1; unsigned char deleteAterAnimation : 1; unsigned char rasterizeAfterAnimation : 1; unsigned char resetRasterizationAfterAnimation : 1; } _collectionViewAnimationFlags;
}

@property (readonly, nonatomic) UXCollectionReusableView *view;
@property (readonly, nonatomic) unsigned long long viewType;
@property (readonly, nonatomic) UXCollectionViewLayoutAttributes *finalLayoutAttributes;
@property (readonly, nonatomic) double startFraction;
@property (readonly, nonatomic) double endFraction;
@property (readonly, nonatomic) BOOL animateFromCurrentPosition;
@property (readonly, nonatomic) BOOL deleteAfterAnimation;
@property (nonatomic) BOOL rasterizeAfterAnimation;
@property (nonatomic) BOOL resetRasterizationAfterAnimation;

- (void)dealloc;
- (id)description;
- (void)start;
- (void)addCompletionHandler:(id /* block */)a0;
- (void)addStartupHandler:(id /* block */)a0;
- (id)initWithView:(id)a0 viewType:(unsigned long long)a1 finalLayoutAttributes:(id)a2 startFraction:(double)a3 endFraction:(double)a4 animateFromCurrentPosition:(BOOL)a5 deleteAfterAnimation:(BOOL)a6 customAnimations:(id /* block */)a7;

@end
