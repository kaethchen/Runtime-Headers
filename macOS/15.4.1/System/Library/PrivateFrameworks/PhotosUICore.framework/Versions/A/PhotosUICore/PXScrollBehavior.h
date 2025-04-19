@interface PXScrollBehavior : NSObject {
    void /* unknown type, empty encoding */ behavior;
}

@property (nonatomic, readonly) long long axis;
@property (nonatomic, readonly) long long decelerationRate;
@property (nonatomic, readonly) BOOL pagingEnabled;
@property (nonatomic, readonly) double pagingOrigin;
@property (nonatomic, readonly) double pageOffset;
@property (nonatomic, readonly) BOOL allowFlickAcrossMultiplePages;
@property (nonatomic, readonly) double intrinsicContentOffset;

+ (id)detentsBehaviorWithAxis:(long long)a0 detents:(id)a1 intrinsicContentOffset:(double)a2;
+ (id)normalBehaviorWithAxis:(long long)a0;
+ (id)normalBehaviorWithAxis:(long long)a0 intrinsicContentOffset:(double)a1;
+ (id)pagingBehaviorWithAxis:(long long)a0 pagingOrigin:(double)a1 pageOffset:(double)a2 decelerationRate:(long long)a3;

- (id)init;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })adjustedScrollTargetContentOffsetForProposedTargetContentOffset:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1 currentContentOffset:(struct CGPoint { double x0; double x1; })a2 decelerationRate:(long long *)a3;
- (id)detentAtContentOffset:(double)a0;

@end
