@class NUIContainerBoxView, NSString, SFFlightCardSection, FUFlightViewController;

@interface SearchUIFlightCardSectionView : SearchUICardSectionView <FUFlightViewControllerDelegate, NUIContainerViewDelegate>

@property (retain, nonatomic) SFFlightCardSection *section;
@property (retain, nonatomic) FUFlightViewController *flightViewController;
@property (nonatomic) unsigned long long lastSelectedLegIndex;
@property (retain, nonatomic) NUIContainerBoxView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)defaultSeparatorStyleForRowModel:(id)a0;
+ (BOOL)fillsBackgroundWithContentForRowModel:(id)a0;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })containerView:(id)a0 systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a1 forArrangedSubview:(id)a2;
- (id)setupContentView;
- (void)flightController:(id)a0 didSelectLeg:(long long)a1 ofFlight:(long long)a2;
- (BOOL)flightControllerOrientationLandscape:(id)a0;
- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;
- (void)updateChevronVisible:(BOOL)a0 leaveSpaceForChevron:(BOOL)a1;

@end
