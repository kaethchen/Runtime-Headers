@class NSMutableArray, NSMutableSet;
@protocol ViewReuseManagerDelegate;

@interface ViewReuseManager : NSObject {
    NSMutableSet *_reusableViews;
    NSMutableSet *_viewsPendingRecycling;
    long long _firstPreviouslyVisibleRepresentedObjectIndex;
}

@property (readonly, nonatomic) Class reusableViewClass;
@property (weak, nonatomic) id<ViewReuseManagerDelegate> delegate;
@property (nonatomic) BOOL alwaysSendPrepareForReuse;
@property (readonly, copy, nonatomic) NSMutableArray *trackedViews;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)recycleView:(id)a0;
- (void)updateTrackedViewsToMatchArray:(id)a0;
- (void)_addTrackedViewForRepresentedObjectAtIndex:(unsigned long long)a0;
- (void)_recycleView:(id)a0;
- (void)_recycleViewsInCollection:(id)a0;
- (id)initWithReusableViewClass:(Class)a0;
- (void)insertView:(id)a0 inTrackedViewsAtRepresentedObjectsIndex:(long long)a1;
- (id)makeView;
- (void)removeViewFromTrackedViews:(id)a0;
- (void)updateTrackedViewsForRepresentedObjectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
