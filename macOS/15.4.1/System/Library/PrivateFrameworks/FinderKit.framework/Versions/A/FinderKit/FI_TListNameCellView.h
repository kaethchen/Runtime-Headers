@class FI_TSyncBadgeButton, NSObject, NSImageView, FI_TBasicImageView, FI_TTextField, NSString, FI_TButton, NSLayoutGuide, FI_TInlineProgressView, NSLayoutConstraint, FI_TListNameSubtitleTextField, NSImage, NSView, FI_TTagsImageView;
@protocol TListNameFieldDelegate;

@interface FI_TListNameCellView : FI_TListBaseCellView <TSyncBadgeButtonContainer, TInlineProgressViewContainer> {
    FI_TBasicImageView *_iconImageView;
    NSLayoutConstraint *_iconImageViewWidthConstraint;
    NSLayoutConstraint *_iconImageViewTrailingConstraint;
    NSLayoutConstraint *_titleCenterYConstraint;
    FI_TListNameSubtitleTextField *_subtitleTextField;
    NSLayoutGuide *_subtitleTextFieldLayoutGuide;
    NSLayoutConstraint *_subtitleLayoutGuideLeadingFixedConstraint;
    NSLayoutConstraint *_subtitleLayoutGuideLeadingFlexibleConstraint;
    NSLayoutConstraint *_subtitleLayoutGuideTrailingFlexibleConstraint;
    NSLayoutConstraint *_subtitleLayoutGuideTrailingFixedConstraint;
    FI_TTextField *_belowTitleView;
    FI_TButton *_ejectButton;
    NSLayoutConstraint *_ejectButtonTrailingConstraint;
    NSImageView *_screenTimeImageView;
    NSLayoutConstraint *_screenTimeTrailingConstraint;
    NSLayoutConstraint *_screenTimeSpacingConstraintOnMaster;
    FI_TTagsImageView *_tagsImageView;
    NSLayoutConstraint *_tagsTrailingConstraint;
    NSLayoutConstraint *_tagsSpacingConstraintOnMaster;
    FI_TBasicImageView *_vendorBadgeImageView;
    NSLayoutConstraint *_vendorBadgeTrailingConstraint;
    NSLayoutConstraint *_vendorBadgeSpacingConstraintOnMaster;
    FI_TSyncBadgeButton *_syncBadgeImageButton;
    NSLayoutConstraint *_syncBadgeSpacingConstraintOnMaster;
    NSLayoutConstraint *_attributionViewSpacingConstraintOnMaster;
    NSView *_attributionView;
    FI_TInlineProgressView *_progressView;
    struct TProgressStateAggregator { int fCloudBadgePrevious; int fCloudBadgeCurrent; struct TNodeProgressStatus { unsigned int fOperationState; float fPercentageDone; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fOperationType; BOOL fCancellable; BOOL fCancelled; BOOL fPausable; BOOL fUserDownload; NSImage *fImage; float fDownloadPercentageDone; long long fDownloadTotalSize; long long fDownloadCompletedSize; float fUploadPercentageDone; long long fUploadTotalSize; long long fUploadCompletedSize; } fProgressStatus; double fIncrementalProgress; BOOL fResumable; } _progressStateAggregator;
    NSLayoutConstraint *_progressViewSpacingConstraintOnMaster;
    FI_TButton *_resumeButton;
    NSLayoutConstraint *_resumeButtonTrailingConstraint;
}

@property (weak, nonatomic) NSObject<TListNameFieldDelegate> *lnfDelegate;
@property (retain, nonatomic) NSLayoutGuide *masterLayoutGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
+ (double)interItemSpacing;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id).cxx_construct;
- (void)layout;
- (void)setAttribution:(id)a0;
- (void)setTitleHidden:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTags:(const void *)a0;
- (void)setTitleFont:(id)a0;
- (long long)titleAlignment;
- (id)titleCell;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleFrame;
- (double)iconSize;
- (void)setIconSize:(double)a0;
- (void)setDimmed:(BOOL)a0;
- (id)iconImageView;
- (void)setIconImage:(id)a0;
- (id)nameTextField;
- (id)hitTestInTitle:(const struct CGPoint { double x0; double x1; } *)a0;
- (void)masterLayoutGuideFrameDidChange;
- (id)createTitleImage;
- (struct CGSize { double x0; double x1; })idealSize;
- (void)setBelowTitleView:(const void *)a0 titleOffset:(double)a1;
- (void)setEjectButtonWithFunc:(const void *)a0;
- (void)setIconDimmed:(BOOL)a0;
- (void)setImportantInfoAtHeadOfSubtitle:(BOOL)a0;
- (void)setProgressStatus:(const void *)a0;
- (void)setResumeButtonWithFunc:(const void *)a0;
- (void)setScreenTimeBadge:(id)a0 toolTip:(const void *)a1;
- (void)setSubtitleStringSet:(const void *)a0 isTrailingAligned:(BOOL)a1 calcMinWidthFromStrs:(BOOL)a2;
- (void)setSyncBadge:(int)a0 sharedWithYouBadge:(struct optional<TSharedWithYouBadge> { union { char x0; int x1; } x0; BOOL x1; })a1 toolTip:(const void *)a2 clickHandler:(const void *)a3;
- (void)setTitleShouldEdit:(BOOL)a0;
- (void)setTitleStr:(struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })a0;
- (void)setVendorBadge:(id)a0 toolTip:(const void *)a1;
- (void)showOrHideResumeButtonToMatchProgress;
- (double)titleBaselineFromTop;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleEditorMaxFrame;
- (void)updateProgressView;

@end
