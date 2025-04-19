@class NSColor, FI_TTargetActionFunctor;

@interface FI_TButton : NSButton {
    NSColor *_titleColor;
    NSColor *_alternateTitleColor;
    BOOL _acceptsFirstMouse;
    struct TriStateBool { unsigned char fState; } _isEnabledCacheWhenNotKey;
    BOOL _isInsideWindowChangedKeyState;
    FI_TTargetActionFunctor *_glue;
    struct unique_ptr<FI_TBestFitStringSelector, std::default_delete<FI_TBestFitStringSelector>> { struct __compressed_pair<FI_TBestFitStringSelector *, std::default_delete<FI_TBestFitStringSelector>> { struct FI_TBestFitStringSelector *__value_; } __ptr_; } _bestFitTitleSelector;
    struct unique_ptr<FI_TBestFitStringSelector, std::default_delete<FI_TBestFitStringSelector>> { struct __compressed_pair<FI_TBestFitStringSelector *, std::default_delete<FI_TBestFitStringSelector>> { struct FI_TBestFitStringSelector *__value_; } __ptr_; } _bestFitAlternateTitleSelector;
}

@property (retain, nonatomic) NSColor *titleColor;
@property (retain, nonatomic) NSColor *alternateTitleColor;
@property (nonatomic) struct CGSize { double width; double height; } maxSize;
@property (nonatomic) struct CGSize { double width; double height; } minSize;
@property (nonatomic) BOOL acceptsFirstMouse;

+ (Class)cellClass;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (id).cxx_construct;
- (void)setAttributedTitle:(id)a0;
- (void)setTitle:(id)a0;
- (void)setObjectValue:(id)a0;
- (void)setControlSize:(unsigned long long)a0;
- (void)_windowChangedKeyState;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)awakeFromNib;
- (unsigned long long)controlSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setAccessibilityElement:(BOOL)a0;
- (void)setAlternateTitle:(id)a0;
- (void)setAttributedAlternateTitle:(id)a0;
- (void)setBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)initCommon;
- (void)setButtonAction:(const void *)a0;
- (void)awakeCommon;
- (struct unique_ptr<FI_TBestFitStringSelector, std::default_delete<FI_TBestFitStringSelector>> { struct __compressed_pair<FI_TBestFitStringSelector *, std::default_delete<FI_TBestFitStringSelector>> { struct FI_TBestFitStringSelector *x0; } x0; })bestFitSelectorForStringSet:(const void *)a0 attributes:(id)a1 extraContentInsets:(const struct NSEdgeInsets { double x0; double x1; double x2; double x3; } *)a2;
- (id)copyButton;
- (void)setAlternateTitleStringSet:(const void *)a0 extraContentInsets:(const struct NSEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (void)setTitleStringSet:(const void *)a0 extraContentInsets:(const struct NSEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (void)updateAlternateTitleColor;
- (void)updateTitleColor;

@end
