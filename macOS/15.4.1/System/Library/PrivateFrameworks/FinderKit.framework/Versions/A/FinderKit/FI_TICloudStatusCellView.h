@class NSString, FI_TInlineProgressView, NSImage, NSLayoutGuide, FI_TSyncBadgeButton;

@interface FI_TICloudStatusCellView : FI_TListBaseCellView <TSyncBadgeButtonContainer, TInlineProgressViewContainer> {
    NSLayoutGuide *_badgeViewLayoutGuide;
    FI_TSyncBadgeButton *_syncBadgeImageButton;
    FI_TInlineProgressView *_progressView;
    struct TProgressStateAggregator { int fCloudBadgePrevious; int fCloudBadgeCurrent; struct TNodeProgressStatus { unsigned int fOperationState; float fPercentageDone; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fOperationType; BOOL fCancellable; BOOL fCancelled; BOOL fPausable; BOOL fUserDownload; NSImage *fImage; float fDownloadPercentageDone; long long fDownloadTotalSize; long long fDownloadCompletedSize; float fUploadPercentageDone; long long fUploadTotalSize; long long fUploadCompletedSize; } fProgressStatus; double fIncrementalProgress; BOOL fResumable; } _progressStateAggregator;
}

@property (nonatomic) struct CGSize { double width; double height; } shortTitlePreferredSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id).cxx_construct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTitleFont:(id)a0;
- (void)updateTitleTextField;
- (void)setDimmed:(BOOL)a0;
- (void)setProgressStatus:(const void *)a0;
- (void)setSyncBadge:(int)a0 sharedWithYouBadge:(struct optional<TSharedWithYouBadge> { union { char x0; int x1; } x0; BOOL x1; })a1 toolTip:(const void *)a2 clickHandler:(const void *)a3;
- (void)updateProgressView;

@end
