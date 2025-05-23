@class NSTimeZone, NSArray, NSString, MKPlaceSectionHeaderView, MKMapItem;
@protocol _MKInfoCardAnalyticsDelegate;

@interface MKPlaceHoursViewController : MKPlaceSectionViewController <MKStackingViewControllerFixedHeightAware, MKInfoCardThemeListener, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol> {
    BOOL _isExpanded;
    MKPlaceSectionHeaderView *_headerView;
    NSArray *_businessHours;
}

@property (retain, nonatomic) MKMapItem *mapItem;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) NSArray *businessHours;
@property (weak, nonatomic) id<_MKInfoCardAnalyticsDelegate> analyticsDelegate;
@property (nonatomic) BOOL resizableViewsDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)placeHoursWithMapItem:(id)a0;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithMapItem:(id)a0;
- (id)titleString;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)_contentSizeDidChange;
- (void)_setExpanded:(BOOL)a0;
- (BOOL)_shouldOnlyShowExpanded;
- (void)_toggleShowAllHours;
- (void)_updateHoursAnimated:(BOOL)a0;
- (id)hoursBuilderWithHours:(id)a0;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (void)infoCardThemeChanged;

@end
