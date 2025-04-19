@class NSArray, NSTimer, SearchUICardSectionCollectionViewItem, NSDate, NSString;
@protocol SearchUIResultsCollectionViewSizingDelegate;

@interface SearchUIResultsCollectionViewController : SearchUICollectionViewController

@property (retain, nonatomic) id monitor;
@property (retain, nonatomic) NSTimer *alternateDetailsTimer;
@property (retain, nonatomic) NSDate *alternateDetailsTimerFireDate;
@property (retain, nonatomic) SearchUICardSectionCollectionViewItem *itemShowingAlternateDetail;
@property (nonatomic) BOOL presentsAlternateDetails;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSString *queryString;
@property (weak, nonatomic) id<SearchUIResultsCollectionViewSizingDelegate> sizingDelegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (void)contentSizeDidChange:(struct CGSize { double x0; double x1; })a0;
- (void)clearMonitor;
- (id)commandEnvironment;
- (void)didSelectItemAtIndexPath:(id)a0;
- (void)setupMonitor;
- (void)toggleAlternateDetailForItemAtIndexPath:(id)a0;

@end
