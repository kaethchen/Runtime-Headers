@class NSMutableArray;

@interface MUICollectionHeightStorage : NSObject {
    NSMutableArray *_heights;
    NSMutableArray *_yCache;
}

@property (nonatomic) double height;
@property (readonly, nonatomic) unsigned long long count;
@property (nonatomic) double spacing;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } margins;

+ (id)keyPathsForValuesAffectingCount;

- (id)init;
- (void).cxx_destruct;
- (void)_invalidateCacheForIndex:(unsigned long long)a0;
- (void)addHeight:(double)a0;
- (double)heightOfIndex:(unsigned long long)a0;
- (unsigned long long)indexAtY:(double)a0;
- (void)insertHeight:(double)a0 atIndex:(unsigned long long)a1;
- (double)maxYOfIndex:(unsigned long long)a0;
- (double)minYOfIndex:(unsigned long long)a0;
- (void)moveHeightAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)removeAllHeights;
- (void)removeHeightAtIndex:(unsigned long long)a0;
- (void)setHeight:(double)a0 ofIndex:(unsigned long long)a1;

@end
