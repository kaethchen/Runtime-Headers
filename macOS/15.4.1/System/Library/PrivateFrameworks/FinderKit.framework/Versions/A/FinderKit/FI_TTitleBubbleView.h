@class FI_TDesktopTitleLayoutManager, NSString, NSTextContainer, NSTextStorage, NSAttributedString, NSColor;

@interface FI_TTitleBubbleView : FI_TDrawRectView <NSViewToolTipOwner, TTitleBadgeHost> {
    struct TDesktopTitleMetrics { NSTextStorage *fTextStorage; FI_TDesktopTitleLayoutManager *fLayoutManager; NSTextContainer *fTextContainer; FI_TDesktopTitleLayoutManager *fTruncatedLayoutManager; NSTextStorage *fTruncatedTextStorage; NSTextContainer *fTruncatedTextContainer; unsigned long long fMaxLines; double fMaxTextWidth; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fUsedTextFrame; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fAvailableTextFrame; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fIdealTextFrame; struct vector<CGRect, std::allocator<CGRect>> { struct CGRect *__begin_; struct CGRect *__end_; struct __compressed_pair<CGRect *, std::allocator<CGRect>> { struct CGRect *__value_; } __end_cap_; } fLineFrames; struct vector<_NSRange, std::allocator<_NSRange>> { struct _NSRange *__begin_; struct _NSRange *__end_; struct __compressed_pair<_NSRange *, std::allocator<_NSRange>> { struct _NSRange *__value_; } __end_cap_; } fLineGlyphRanges; struct vector<_NSRange, std::allocator<_NSRange>> { struct _NSRange *__begin_; struct _NSRange *__end_; struct __compressed_pair<_NSRange *, std::allocator<_NSRange>> { struct _NSRange *__value_; } __end_cap_; } fLineCharRanges; double fCenteredHorizontalInset; double fAlignedHorizontalInset; BOOL fIsTruncatingLastLine; BOOL fNeedsCalculation; } _textMetrics;
    struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } _toolTip;
    struct CGSize { double width; double height; } _idealSize;
    BOOL _isSelected;
    BOOL _isDragItem;
    BOOL _useActiveAppearance;
    BOOL _includeShadowPadding;
    BOOL _isOverlappingTitle;
    NSColor *_superViewsBackgroundColor;
    struct vector<int, std::allocator<int>> { int *__begin_; int *__end_; struct __compressed_pair<int *, std::allocator<int>> { int *__value_; } __end_cap_; } _tagColorIndexes;
    struct vector<std::pair<TitleViewBadgeID, FI_TTitleViewBadge *>, std::allocator<std::pair<TitleViewBadgeID, FI_TTitleViewBadge *>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<TitleViewBadgeID, FI_TTitleViewBadge *> *, std::allocator<std::pair<TitleViewBadgeID, FI_TTitleViewBadge *>>> { void *__value_; } __end_cap_; } _badgeViews;
    BOOL _isDimmed;
}

@property (retain, nonatomic) NSAttributedString *attrString;
@property (nonatomic) unsigned long long maxLines;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isDragItem) BOOL dragItem;
@property (nonatomic, getter=isOverlappingTitle) BOOL overlappingTitle;
@property (nonatomic) BOOL useActiveAppearance;
@property (nonatomic) BOOL useDesktopSelectionColor;
@property (nonatomic) BOOL includeShadowPadding;
@property (nonatomic) BOOL drawAntiAliased;
@property (retain, nonatomic) NSColor *superViewsBackgroundColor;
@property (nonatomic, getter=isDimmed) BOOL dimmed;
@property (nonatomic) BOOL useAutoLayoutInPreviewPane;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)desktopAppearanceSelectionColor:(BOOL)a0;
+ (id)iconViewAppearanceSelectionColor:(BOOL)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)layout;
- (id)toolTip;
- (BOOL)intersectsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_windowChangedKeyState;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)firstBaselineOffsetFromTop;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (double)lastBaselineOffsetFromBottom;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (void)setBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setMaxSize:(struct CGSize { double x0; double x1; })a0;
- (void)setMinSize:(struct CGSize { double x0; double x1; })a0;
- (void)setToolTip:(id)a0;
- (void)updateTrackingAreas;
- (id)view:(id)a0 stringForToolTip:(long long)a1 point:(struct CGPoint { double x0; double x1; })a2 userData:(void *)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleFrame;
- (void)initCommon;
- (BOOL)_isActive;
- (id)selectionColor:(BOOL)a0;
- (void)copyBadgesFrom:(id)a0;
- (void)removeAllBadges;
- (void)_superSetBoundsSize:(const struct CGSize { double x0; double x1; } *)a0;
- (void)_superSetFrameSize:(const struct CGSize { double x0; double x1; } *)a0;
- (void)addBadge:(id)a0 as:(int)a1;
- (void)appendPlaceholderImagesToTitleString:(id)a0 forFont:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bubbleFrame;
- (void)desktopWindowMainStateChanged;
- (id)findBadge:(int)a0;
- (struct CGSize { double x0; double x1; })idealSize;
- (void)invalidateIdealSize;
- (BOOL)isICloudBadgeVisible;
- (struct vector<CGRect, std::allocator<CGRect>> { struct CGRect *x0; struct CGRect *x1; struct __compressed_pair<CGRect *, std::allocator<CGRect>> { struct CGRect *x0; } x2; })lineBubbleFrames;
- (struct pair<CGRect, double> { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; })lineFragmentAndBaselineForCharAtIndex:(unsigned long long)a0 layoutManager:(id)a1;
- (unsigned long long)linesToDrawNotTruncated;
- (struct pair<CGRect, bool> { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; BOOL x1; })placeholderImageAttachmentFrameAt:(int)a0 withLegacyRounding:(BOOL)a1;
- (void)removeAllBadgesNotIn:(const void *)a0;
- (void)removeBadge:(id)a0;
- (void)setAttrString:(id)a0 withWordBreakMarkers:(BOOL)a1;
- (void)setFrameOrBoundsSizeHelper:(const struct CGSize { double x0; double x1; } *)a0 oldSize:(const struct CGSize { double x0; double x1; } *)a1 sizeChangerFunc:(const void *)a2;
- (BOOL)setImageAttachment:(id)a0 toolTip:(const void *)a1;
- (void)setTagColorIndexes:(const void *)a0;
- (BOOL)showBubble;

@end
