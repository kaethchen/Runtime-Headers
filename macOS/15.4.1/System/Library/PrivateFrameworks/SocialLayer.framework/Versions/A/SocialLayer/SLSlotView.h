@class UISSlotTag, NSString, UISSlotStyle, NSColor;
@protocol UISSlotDrawer, UISSlotAnyContent;

@interface SLSlotView : NSView {
    id<UISSlotDrawer> _localSlotDrawer;
    UISSlotTag *_localTag;
    NSString *_localization;
    id /* block */ _slotAnyContentProvider;
    UISSlotStyle *_currentSlotStyle;
    struct CGSize { double width; double height; } _intrinsicContentSize;
    id<UISSlotAnyContent> _slotContent;
    unsigned long long _currentGeneration;
}

@property (retain, nonatomic) NSColor *tintColor;
@property (copy, nonatomic, setter=_setRemoteContentProvider:) id /* block */ _remoteContentProvider;
@property (copy, nonatomic, setter=_setSlotAnyContentProvider:) id /* block */ _slotAnyContentProvider;

+ (id)_sharedLayerContext;
+ (id)_overlaySlotViewInView:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_updateContent;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateLayer;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (BOOL)wantsUpdateLayer;
- (void)windowDidChangeBackingProperties;
- (void)_setSlotContent:(id)a0 atYieldGeneration:(unsigned long long)a1;
- (id)_slotStyle;
- (void)_slotStyleDidChange;
- (void)_updateLocalContentWithLastSlotStyle:(id)a0;
- (void)_updateRemoteContent;
- (id)initWithLocalSlotDrawer:(id)a0 localTag:(id)a1;

@end
