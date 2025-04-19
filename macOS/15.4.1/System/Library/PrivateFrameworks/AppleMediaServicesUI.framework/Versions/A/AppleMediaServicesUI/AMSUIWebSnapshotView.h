@class NSView;

@interface AMSUIWebSnapshotView : AMSUICommonView

@property (retain) NSView *snapshot;
@property double originalRatio;

+ (id)_imageViewForImage:(id)a0;
+ (void)_screenCapFromView:(id)a0 completion:(id /* block */)a1;

- (void).cxx_destruct;
- (void)updateSnapshot:(id)a0;
- (void)layoutSubviews;
- (id)initWithView:(id)a0 completion:(id /* block */)a1;
- (id)removeSnapshot;

@end
