@class UXView, NSError, NSArray, NSString, PXUIMediaProvider, PXImageRequester, PXDisplayScreenDynamicRangeMonitor, NSImage, PXReusableObjectPool, NSObject, PXDisplayAssetViewModel;
@protocol OS_os_log, PXDisplayAssetContentViewDelegate, PXDisplayAsset;

@interface PXDisplayAssetContentView : UXView <PXReusableObject, PXChangeObserver> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
}

@property (class, readonly, nonatomic) PXReusableObjectPool *viewPool;

@property (readonly, nonatomic) UXView *contentView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentBounds;
@property (retain, nonatomic) NSError *latestError;
@property (retain, nonatomic) PXDisplayScreenDynamicRangeMonitor *screenDynamicRangeMonitor;
@property (nonatomic) long long effectivePreferredImageDynamicRange;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) struct CGSize { double width; double height; } targetSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsRect;
@property (readonly, nonatomic) NSImage *image;
@property (readonly, nonatomic) PXImageRequester *imageRequester;
@property (readonly, nonatomic) double imageProgress;
@property (nonatomic) long long requestID;
@property (retain, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, nonatomic) double loadingProgress;
@property (readonly, nonatomic) long long playbackStyle;
@property (retain, nonatomic) PXUIMediaProvider *mediaProvider;
@property (copy, nonatomic) NSArray *placeholderImageFilters;
@property (nonatomic) double placeholderTransitionDuration;
@property (nonatomic) BOOL canDisplayLoadingIndicator;
@property (nonatomic) BOOL isDisplayingFullQualityContent;
@property (nonatomic) BOOL disableImageRequestsOnResize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } currentContentsRect;
@property (readonly, nonatomic) NSImage *currentImage;
@property (readonly, nonatomic) NSError *error;
@property (nonatomic, getter=isAnimatedContentEnabled) BOOL animatedContentEnabled;
@property (nonatomic) BOOL toneMapVideoToStandardDynamicRange;
@property (nonatomic) long long preferredImageDynamicRange;
@property (retain, nonatomic) PXDisplayAssetViewModel *viewModel;
@property (weak, nonatomic) id<PXDisplayAssetContentViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)checkInView:(id)a0;
+ (id)checkOutViewForAsset:(id)a0;
+ (id)checkOutViewForAsset:(id)a0 withPlaybackStyle:(long long)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })preferredContentsRectForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setError:(id)a0;
- (void)setImage:(id)a0;
- (void)_applicationDidResignActive;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNeedsLayout;
- (void)viewDidChangeBackingProperties;
- (void)viewWillMoveToWindow:(id)a0;
- (void)handleError:(id)a0;
- (void)setTargetSize:(struct CGSize { double x0; double x1; })a0;
- (void)setContentMode:(long long)a0;
- (void)updateContent;
- (void)imageDidChange;
- (void)didMoveToWindow;
- (void)_applicationDidEnterBackground;
- (void)_updateIfNeeded;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)becomeReusable;
- (void)animatedContentEnabledDidChange;
- (void)_invalidateError;
- (void)_invalidateViewModelProperties;
- (void)_loadContentView;
- (void)_resetPreferredImageDynamicRange;
- (void)_startHeadroomMonitoringIfPossible;
- (void)_stopHeadroomMonitoring;
- (void)_updateEffectiveImageDynamicRange;
- (void)_updateError;
- (void)_updateFailureView;
- (void)_updateProgressView;
- (void)_updateTargetSize;
- (void)_updateViewModelProperties;
- (void)contentModeDidChange;
- (void)contentsRectDidChange;
- (void)effectivePreferredImageDynamicRangeDidChange;
- (void)imageProgressDidChange;
- (void)imageRequesterDidChange:(unsigned long long)a0;
- (void)invalidateLoadingProgress;
- (void)isDisplayingFullQualityContentDidChange;
- (void)placeholderImageFiltersDidChange;
- (void)placeholderTransitionDurationDidChange;
- (void)preferredImageDynamicRangeDidChange;
- (void)setImageProgress:(double)a0;
- (void)setImageRequester:(id)a0;
- (void)setNeedsUpdateContent;
- (void)toneMapVideoToStandardDynamicRangeDidChange;
- (void)viewModelDidChange:(unsigned long long)a0;

@end
