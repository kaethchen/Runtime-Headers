@class NSArray, NSString, MKPlaceActionManager;
@protocol _MKPlaceViewControllerDelegate;

@interface MKPlaceCardActionsViewController : MKPlaceSectionViewController <MKPlaceCardActionSectionViewDelegate, _MKStackViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate>

@property (retain, nonatomic) NSArray *viewArray;
@property (nonatomic) BOOL haveTwoColumns;
@property (nonatomic) BOOL useSmallFonts;
@property (nonatomic) BOOL useMarginLayout;
@property (nonatomic) BOOL showTopSeparator;
@property (nonatomic) BOOL showTopButtonSeparator;
@property (nonatomic) BOOL allowRowSelection;
@property (copy, nonatomic) NSArray *actionItemArray;
@property (weak, nonatomic) MKPlaceActionManager *actionManager;
@property (weak, nonatomic) id<_MKPlaceViewControllerDelegate> placeViewControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)_makePlaceActionButton;
- (void)_setUpSectionViews;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (void)placeCardActionSectionView:(id)a0 buttonWithActionItemPressed:(id)a1;
- (void)sectionView:(id)a0 didSelectRow:(id)a1 atIndex:(unsigned long long)a2;
- (double)stackView:(id)a0 distanceBetweenUpperView:(id)a1 andLowerView:(id)a2;
- (void)viewDidAppear:(BOOL)a0;

@end
