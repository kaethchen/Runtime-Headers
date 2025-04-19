@class _MKLookAroundPassthroughView, MKMapItem, NSArray, MKLookAroundContainerBadgeView, NSColor;
@protocol MKLookAroundContainerViewDelegate, NSObject;

@interface MKLookAroundContainerView : NSView {
    NSColor *_dimmingViewBackgroundColorGreyOpaque;
    NSColor *_dimmingViewBackgroundColorBlackOpaque;
    NSColor *_dimmingViewBackgroundColorBlackTranslucent;
    NSColor *_dimmingViewBackgroundColorClear;
    NSColor *_dimmingViewBackgroundColorPhotosOpaque;
    NSArray *_badgeConstraints;
}

@property (readonly, nonatomic) NSColor *dimmingViewBackgroundColorGreyOpaque;
@property (readonly, nonatomic) NSColor *dimmingViewBackgroundColorBlackOpaque;
@property (readonly, nonatomic) NSColor *dimmingViewBackgroundColorBlackTranslucent;
@property (readonly, nonatomic) NSColor *dimmingViewBackgroundColorClear;
@property (readonly, nonatomic) NSColor *dimmingViewBackgroundColorPhotosOpaque;
@property (nonatomic) BOOL floatingDimmingStyle;
@property (nonatomic) BOOL photosDimmingStyle;
@property (nonatomic) BOOL pipDimmingStyle;
@property (retain, nonatomic) _MKLookAroundPassthroughView *dimmingView;
@property (retain, nonatomic) MKLookAroundContainerBadgeView *badgeView;
@property (retain, nonatomic) id<NSObject> lookAroundViewDidBecomeAdequatelyDrawnObserver;
@property (retain, nonatomic) id<NSObject> lookAroundViewDidBecomeFullyDrawnObserver;
@property (weak, nonatomic) id<MKLookAroundContainerViewDelegate> delegate;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (nonatomic) BOOL isMarkedLocation;
@property (nonatomic, getter=isBadgeOnLeadingEdge) BOOL badgeOnLeadingEdge;
@property (nonatomic, getter=isBadgeHidden) BOOL badgeHidden;
@property (nonatomic) unsigned long long dimmingState;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (void)didAddSubview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)cancelIfPresent;
- (void)_commonInitWithLookAroundView:(id)a0;
- (void)_setDimmingViewHidden:(BOOL)a0 loading:(BOOL)a1 animated:(BOOL)a2;
- (void)_updateBadgeConstraints;
- (void)_updateDimmingStateForLookAroundView:(id)a0 completion:(id /* block */)a1;
- (void)_updateDimmingViewActivityIndicator;
- (void)_updateDimmingViewBackgroundColor;
- (void)infoCardThemeChanged;
- (id)initWithFloatingDimmingStyle:(BOOL)a0;
- (id)initWithLookAroundView:(id)a0;
- (id)initWithPhotosDimmingStyle:(BOOL)a0;
- (id)lookAroundViewIfPresent;
- (void)setBadgeHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)setDimmingState:(unsigned long long)a0 animated:(BOOL)a1;
- (void)setMapItem:(id)a0 isMarkedLocation:(BOOL)a1 wantsCloseUpView:(BOOL)a2;
- (void)setMapItem:(id)a0 wantsCloseUpView:(BOOL)a1;

@end
