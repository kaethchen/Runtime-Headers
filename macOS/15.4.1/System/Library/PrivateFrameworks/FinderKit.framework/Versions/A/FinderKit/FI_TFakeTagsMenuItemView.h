@class NSView, FI_TTextField;

@interface FI_TFakeTagsMenuItemView : FI_TUpdateLayerView {
    NSView *_selectionView;
    FI_TTextField *_titleField;
    FI_TTextField *_addOrRemoveField;
}

@property (nonatomic) BOOL selected;
@property (nonatomic) struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } addOrRemoveLabelText;

+ (id)fakeMenuItemViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)layout;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseUp:(id)a0;
- (void)initCommon;
- (id)newTextFieldSubview;

@end
