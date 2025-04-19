@class NSView, NSCollectionViewLayoutAttributes, NSCollectionViewItem, NSMutableArray;

@interface NSCollectionViewAnimation : NSObject {
    NSMutableArray *_completionHandlers;
    NSMutableArray *_startupHandlers;
    id /* block */ _animationBlock;
    struct { unsigned char animateFromCurrentPosition : 1; unsigned char deleteAfterAnimation : 1; unsigned char rasterizeAfterAnimation : 1; unsigned char resetRasterizationAfterAnimation : 1; unsigned char updateZIndexAfterAnimation : 1; } _collectionViewAnimationFlags;
}

@property (readonly, nonatomic) NSCollectionViewItem *item;
@property (readonly, nonatomic) NSView *view;
@property (readonly, nonatomic) long long viewType;
@property (readonly, nonatomic) NSCollectionViewLayoutAttributes *finalLayoutAttributes;
@property (readonly, nonatomic) double startFraction;
@property (readonly, nonatomic) double endFraction;
@property (readonly, nonatomic) BOOL animateFromCurrentPosition;
@property (readonly, nonatomic) BOOL deleteAfterAnimation;
@property (readonly, nonatomic) BOOL updateZIndexAfterAnimation;
@property (nonatomic) BOOL rasterizeAfterAnimation;
@property (nonatomic) BOOL resetRasterizationAfterAnimation;

- (id)description;
- (void).cxx_destruct;
- (void)addCompletionHandler:(id /* block */)a0;
- (void)addStartupHandler:(id /* block */)a0;
- (id)initWithView:(id)a0 viewType:(long long)a1 finalLayoutAttributes:(id)a2 startFraction:(double)a3 endFraction:(double)a4 animateFromCurrentPostion:(BOOL)a5 deleteAfterAnimation:(BOOL)a6 customAnimations:(id /* block */)a7;
- (void)setUpdateZIndexAfterAnimation:(BOOL)a0;
- (void)startFromCollectionViewCore:(id)a0;

@end
