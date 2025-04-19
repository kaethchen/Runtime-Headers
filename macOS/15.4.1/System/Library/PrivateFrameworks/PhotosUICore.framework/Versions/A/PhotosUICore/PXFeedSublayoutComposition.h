@class PXLayoutGenerator;
@protocol PXFeedViewLayoutSpec;

@interface PXFeedSublayoutComposition : PXGGeneratedSublayoutComposition {
    PXLayoutGenerator *_cachedLayoutGenerator;
}

@property (retain, nonatomic) id<PXFeedViewLayoutSpec> spec;
@property (readonly, nonatomic) long long scrollableAxis;

- (void).cxx_destruct;
- (id)configuredLayoutGenerator;
- (void)visibleRectDidChange;

@end
