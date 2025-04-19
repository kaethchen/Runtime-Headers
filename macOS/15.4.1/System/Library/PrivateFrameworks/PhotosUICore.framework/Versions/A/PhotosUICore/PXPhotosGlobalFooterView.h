@class NSTextField, NSString, UXView, NSProgressIndicator, NSAlert, PXFooterAnimatedIconView, PXFooterViewModel, NSTextView, NSView;
@protocol PXPhotosGlobalFooterViewDelegate, PXPhotosGlobalFooterViewLayoutDelegate;

@interface PXPhotosGlobalFooterView : UXCollectionReusableView <PXChangeObserver, NSTextViewDelegate> {
    BOOL _hasAnimatedIconView;
    PXFooterAnimatedIconView *_animatedIconView;
    NSTextField *_titleLabel;
    NSTextField *_extendedTitleLabel;
    NSTextField *_internalMessageSubtitleLabel;
    UXView *_filterView;
    NSTextView *_subtitle1TextView;
    NSTextView *_subtitle2TextView;
    NSTextField *_subtitle2Label;
    NSProgressIndicator *_progressView;
    NSAlert *_presentedAlert;
    NSView *_processingView;
    struct { BOOL photosGlobalFooterViewDidChangeHeight; } _delegateRespondsTo;
    BOOL _isPerformingChanges;
}

@property (retain, nonatomic) PXFooterViewModel *viewModel;
@property (weak, nonatomic) id<PXPhotosGlobalFooterViewDelegate> delegate;
@property (weak, nonatomic) id<PXPhotosGlobalFooterViewLayoutDelegate> layoutDelegate;
@property (readonly, nonatomic) double currentHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)titleTextAttributes;
+ (void)_configureTextField:(id)a0 withAttributes:(id)a1 accessibilityIdentifier:(id)a2;
+ (id)_internalMessageSubtitleTextAttributes;
+ (id)extendedTitleTextAttributes;
+ (id)subtitle2TextAttributes;
+ (id)subtitleLinkTextAttributes;
+ (id)subtitleTextAttributesSecondary:(BOOL)a0;

- (id)init;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (void)layout;
- (BOOL)textView:(id)a0 clickedOnLink:(id)a1 atIndex:(unsigned long long)a2;
- (void)_updateTitle;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isFlipped;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateProgress;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (BOOL)_shouldUseActionLinkInSubtitle1;
- (BOOL)_shouldUseActionLinkInSubtitle2;
- (void)_animatedIconCrossedGridCycleBoundary;
- (struct CGSize { double x0; double x1; })_performLayoutInWidth:(double)a0 updateSubviewFrames:(BOOL)a1;
- (void)_updateAnimatedIcon;
- (void)_updateExtendedTitle;
- (void)_updateFilterView;
- (void)_updateInternalMessageSubtitle;
- (void)_updateProcessingView;
- (void)_updateSubtitle1;
- (void)_updateSubtitle2;

@end
