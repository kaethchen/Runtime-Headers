@class NSArray, NSString, GEOComposedRouteAdvisory, GEOAdvisoriesInfo;
@protocol IncidentsViewControllerDelegate;

@interface MKIncidentsViewController : _MKTableViewController {
    NSArray *_sections;
}

@property (copy, nonatomic) NSArray *transitIncidents;
@property (readonly, nonatomic) NSString *incidentsTitle;
@property (copy, nonatomic) GEOComposedRouteAdvisory *advisory;
@property (copy, nonatomic) GEOAdvisoriesInfo *advisoriesInfo;
@property (weak, nonatomic) id<IncidentsViewControllerDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_updateTitle;
- (long long)numberOfRowsInTableView:(id)a0;
- (BOOL)selectionShouldChangeInTableView:(id)a0;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)viewDidLoad;
- (unsigned long long)_incidentsCount;
- (id)_transitCellForIndex:(long long)a0 inSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (id)_advisoriesInfoCellForIndex:(long long)a0;
- (id)_advisoryItemCellForIndex:(long long)a0;
- (BOOL)_canShowWhileLocked;
- (id)_cellForRow:(long long)a0 inSection:(long long)a1;
- (void)_compileSections;
- (void)_localeDidChange;
- (long long)_sectionForSectionIndex:(long long)a0;
- (long long)_transitIncidentIndexForRow:(long long)a0 section:(long long)a1;
- (unsigned long long)_transitIncidentsCount;
- (id)detailCellInSection:(long long)a0;
- (id)extendedDetailCell;
- (void)infoCardThemeChanged;
- (id)initWithTransitIncidents:(id)a0;
- (void)reloadDataSource;
- (struct CGSize { double x0; double x1; })viewIntrinsicContentSize;

@end
