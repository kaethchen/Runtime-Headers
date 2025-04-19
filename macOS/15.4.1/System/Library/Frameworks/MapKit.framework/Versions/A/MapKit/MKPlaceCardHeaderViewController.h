@class NSURL, _MKUILabel, MKImageView, _MKLocalizedHoursBuilder, MKVibrancyAwareLabelView, _MKDataHeaderModel, MKPlaceSectionRowView, NSLayoutConstraint, NSString, _MKTokenAttributedString, NSLayoutGuide, NSArray, NSView;
@protocol MKPlaceCardHeaderViewControllerDelegate, _MKPlaceItem, GEOTransitLineItem;

@interface MKPlaceCardHeaderViewController : MKPlaceSectionViewController <_MKStackViewDelegate, MKModuleViewControllerProtocol, MKETAProviderObserver> {
    unsigned long long _layout;
    MKPlaceSectionRowView *_titleSectionView;
    MKPlaceSectionRowView *_labelsSectionView;
    MKImageView *_logoImageView;
    _MKUILabel *_titleOnlyLabel;
    _MKUILabel *_firstLabel;
    _MKUILabel *_secondLabel;
    _MKUILabel *_secondaryNameLabel;
    MKVibrancyAwareLabelView *_thirdLabel;
    NSView *_thirdDisplayedLabel;
    NSArray *_constraints;
    NSLayoutGuide *_leadingGuide;
    NSURL *_logoURL;
    _MKDataHeaderModel *_dataModel;
    _MKTokenAttributedString *_titleToken;
    _MKTokenAttributedString *_secondaryNameToken;
    _MKTokenAttributedString *_distanceToken;
    _MKTokenAttributedString *_ratingsToken;
    _MKTokenAttributedString *_priceToken;
    _MKTokenAttributedString *_categoryToken;
    _MKTokenAttributedString *_openStateToken;
    _MKTokenAttributedString *_userLocationToken;
    _MKTokenAttributedString *_venueToken;
    _MKTokenAttributedString *_verifiedToken;
    NSLayoutConstraint *_secondLabelToFirstLabelConstraint;
    NSLayoutConstraint *_lastLabelToBottomConstraint;
    double _secondLabelToFirstLabelConstraintConstantMax;
    double _secondLabelToFirstLabelConstraintConstantMin;
    BOOL _isUserLocation;
    BOOL _optionSmallScreen;
    BOOL _constraintsCreated;
    BOOL _notVerified;
    double _lastMaskAlphaValueApplied;
}

@property (retain, nonatomic) _MKLocalizedHoursBuilder *localizedHoursBuilder;
@property (readonly, nonatomic) double lastLabelToBottomConstant;
@property (readonly, nonatomic) BOOL shouldShowCallToActionWithRatingHeaderInfo;
@property (readonly, nonatomic) id<_MKPlaceItem> placeItem;
@property (readonly, nonatomic) id<GEOTransitLineItem> lineItem;
@property (weak, nonatomic) id<MKPlaceCardHeaderViewControllerDelegate> delegate;
@property (nonatomic) double contentAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)minimalModeHeight;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)_currentTitle;
- (id)titleFont;
- (void)updateViews;
- (void)viewDidLoad;
- (void)_createViews;
- (void)ETAProviderUpdated:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)_contentSizeDidChange;
- (void)_contentSizeDidChangeNotificationHandler;
- (BOOL)_hasSecondaryName;
- (BOOL)_isLikelyToShowDistance;
- (void)_loadLogo;
- (BOOL)_mapItemShouldDisplayDistance:(id)a0;
- (id)_openStateString;
- (id)_reviewLabelText;
- (id)_secondaryNameTitle;
- (void)_setupDatas;
- (id)_verifiedText;
- (void)animateSecondLabelWithPercentage:(double)a0;
- (void)infoCardThemeChanged;
- (id)initWithLineItem:(id)a0 layout:(unsigned long long)a1;
- (id)initWithPlaceItem:(id)a0 layout:(unsigned long long)a1;
- (id)newLabel;
- (double)secondaryNameLabelPadding;
- (id)secondaryNameTimingFunction;
- (void)setConstraints;
- (void)updateContent;
- (void)updateContentAlpha;
- (void)updateHeaderTitle;

@end
