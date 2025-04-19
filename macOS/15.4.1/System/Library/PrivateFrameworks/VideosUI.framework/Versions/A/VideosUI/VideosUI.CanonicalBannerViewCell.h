@class VUIImageView, NSArray, VUILabel, NSView, _TtC8VideosUI16RolesSummaryView, VUIMediaTagsView;

@interface VideosUI.CanonicalBannerViewCell : VUIBaseCollectionViewCell <VUINSNavigationBarVisibilityThresholdProviding, VUIRentalExpirationLabelDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_canonicalConfig;
    void /* unknown type, empty encoding */ bannerViewModel;
    void /* unknown type, empty encoding */ bannerLayout;
    void /* unknown type, empty encoding */ collectionViewFrameSize;
    void /* unknown type, empty encoding */ titleImageView;
    void /* unknown type, empty encoding */ contentTitleView;
    void /* unknown type, empty encoding */ contentSubtitleView;
    void /* unknown type, empty encoding */ episodeInfoTextView;
    void /* unknown type, empty encoding */ promoTextView;
    void /* unknown type, empty encoding */ askToBuyPromptView;
    void /* unknown type, empty encoding */ buttonViews;
    void /* unknown type, empty encoding */ availabilityTextView;
    void /* unknown type, empty encoding */ availabilityImageView;
    void /* unknown type, empty encoding */ disclaimerTextView;
    void /* unknown type, empty encoding */ descriptionTextView;
    void /* unknown type, empty encoding */ rolesSummaryView;
    void /* unknown type, empty encoding */ tagsView;
    void /* unknown type, empty encoding */ infoTagsView;
    void /* unknown type, empty encoding */ uberBackgroundView;
    void /* unknown type, empty encoding */ previousViewSize;
    void /* unknown type, empty encoding */ supplementaryData;
    void /* unknown type, empty encoding */ interfaceStyleFromImage;
    void /* unknown type, empty encoding */ isVideoPlaying;
    void /* unknown type, empty encoding */ backgroundMediaControlsView;
    void /* unknown type, empty encoding */ playbackInteractionManager;
    void /* unknown type, empty encoding */ backgroundMediaController;
    void /* unknown type, empty encoding */ contentTextLegibilityGradientView;
    void /* unknown type, empty encoding */ attributionImageView;
    void /* unknown type, empty encoding */ attributionImageGradientView;
    void /* unknown type, empty encoding */ bannerPlatterView;
    void /* unknown type, empty encoding */ cardShowcaseFactor;
    void /* unknown type, empty encoding */ alignLogoToLeftIfRTL;
    void /* unknown type, empty encoding */ syndicationId;
    void /* unknown type, empty encoding */ attributionViewHeight;
    void /* unknown type, empty encoding */ showAttributionViewBelowBanner;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pillSeparatorView;
    void /* unknown type, empty encoding */ attributionView;
    void /* unknown type, empty encoding */ bannerButtonSpacing;
    void /* unknown type, empty encoding */ disclaimerTextBottomSpacing;
    void /* unknown type, empty encoding */ contentOffset;
    void /* unknown type, empty encoding */ $__lazy_storage_$_separatorView;
    void /* unknown type, empty encoding */ cardUIEnabled;
}

@property (nonatomic, readonly) VUIImageView *accessibilityTitleImageView;
@property (nonatomic, readonly) VUILabel *accessibilityContentTitleView;
@property (nonatomic, readonly) NSView *accessibilityContentSubtitleView;
@property (nonatomic, readonly) VUILabel *accessibilityEpisodeInfoTextView;
@property (nonatomic, readonly) VUILabel *accessibilityPromoTextView;
@property (nonatomic, readonly) VUILabel *accessibilityAskToBuyPromptView;
@property (nonatomic, readonly) NSArray *accessibilityButtonViews;
@property (nonatomic, readonly) VUILabel *accessibilityAvailabilityTextView;
@property (nonatomic, readonly) VUIImageView *accessibilityAvailabilityImageView;
@property (nonatomic, readonly) VUILabel *accessibilityDisclaimerTextView;
@property (nonatomic, readonly) NSView *accessibilityDescriptionTextView;
@property (nonatomic, readonly) _TtC8VideosUI16RolesSummaryView *accessibilityRolesSummaryView;
@property (nonatomic, readonly) VUIMediaTagsView *accessibilityTagsView;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (double)visibilityThreshold;
- (void)handleGroupWatchActivityStateUpdatedNotification:(id)a0;
- (void)handleSyndicationInfoUpdatedNotification:(id)a0;
- (void)rentalExpirationLabelNeedsRelayout:(id)a0;
- (void)vui_cellWillBeDisplayed;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)vui_prepareForReuse;

@end
