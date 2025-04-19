@class NSView, FI_TKeyValueObserverGlue, NSArray, NSLayoutGuide, NSObject, FI_TNotificationCenterObserverGlue, NSLayoutConstraint, NSIndexSet;

@interface FI_TContainerLayoutManager : NSObject {
    struct TKeyValueObserver { FI_TKeyValueObserverGlue *fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; NSIndexSet *fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _browserInsetsDidChangeObserver;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _windowDidEndLiveResizeObserver;
    NSLayoutConstraint *_bottomHorizontalSeparatorConstraint;
}

@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } browserViewContentInsets;
@property (weak, nonatomic) NSView *contentView;
@property (nonatomic) BOOL opaqueToolbar;
@property (readonly, nonatomic) NSLayoutGuide *searchSliceLayoutGuide;
@property (readonly, nonatomic) NSLayoutGuide *bannerLayoutGuide;
@property (readonly, nonatomic) NSLayoutGuide *pathBarLayoutGuide;
@property (readonly, nonatomic) NSLayoutGuide *bottomHorizontalSeparatorLayoutGuide;
@property (nonatomic) BOOL expanded;
@property (readonly, nonatomic) NSLayoutGuide *browserScrollViewVerticalContentInsetsLayoutGuide;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })contentInsetsWithInnerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithContentView:(id)a0 toolbarBottomAnchor:(id)a1 bottomViewTopAnchor:(id)a2;
- (id)newLayoutGuideWithTopAnchor:(id)a0 bottomAnchor:(id)a1 identifier:(id)a2 outConstraints:(id)a3;
- (void)updateBrowserViewContentInsets;

@end
