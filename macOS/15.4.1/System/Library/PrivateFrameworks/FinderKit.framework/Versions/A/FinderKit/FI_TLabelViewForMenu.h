@class FI_TFakeTagsMenuItemView, NSTrackingArea, NSObject;

@interface FI_TLabelViewForMenu : FI_TLabelView {
    int _validationCount;
    struct TKeyValueBinder { NSObject *fReceiverObj; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fReceiversBinding; } _hoveredPartBinder;
    NSTrackingArea *_trackingArea;
}

@property (weak, nonatomic) FI_TFakeTagsMenuItemView *fakeTagsMenuItem;
@property (nonatomic) long long hoveredPart;

+ (id)labelViewForMenu:(id)a0;
+ (id)labelViewFromMenuItem:(id)a0;
+ (id)titleFieldFromMenuItem:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)updateTrackingAreas;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)a0;
- (void)gumdropFavoriteTagChosenInMenu:(id)a0;
- (int)validationCount;
- (void)bumpValidationCount;
- (BOOL)favoriteTagWillRemove:(short)a0;
- (void)gumdropValueChangedInMenu:(id)a0;
- (void)setForApplyingFavoriteTags:(BOOL)a0;

@end
