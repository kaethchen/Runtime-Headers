@class _MKMapItemAttribution, NSArray, NSString, MKPlaceAttributionCell, NSAttributedString, MKMapItem;
@protocol _MKInfoCardAnalyticsDelegate;

@interface MKPlaceAttributionViewController : MKPlaceSectionViewController <MKPlaceAttributionCellDelegate, MKStackingViewControllerFixedHeightAware, MKModuleViewControllerProtocol>

@property (retain, nonatomic) MKPlaceAttributionCell *attributionCell;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (copy, nonatomic) NSAttributedString *attributionString;
@property (retain, nonatomic) _MKMapItemAttribution *attribution;
@property (copy, nonatomic) NSArray *urlStrings;
@property (weak, nonatomic) id<_MKInfoCardAnalyticsDelegate> analyticsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL resizableViewsDisabled;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;
- (void)openURL;
- (BOOL)_canShowWhileLocked;
- (void)attributionCellDidChangeEffectiveAppearance;
- (id)infoAttributionString;
- (void)infoCardThemeChanged;
- (void)updateLogo;

@end
