@class FUFlightView, NSString, FULoadingView, NSArray, NSDate, NSNumber, FUErrorView;
@protocol FUFlightViewControllerDelegate;

@interface FUFlightViewController : NSViewController <MKMapViewDelegate, FUFlightViewDelegate> {
    BOOL _loadingFlight;
    NSDate *_startLoadingDate;
    unsigned long long _displayStyle;
    id<FUFlightViewControllerDelegate> _delegate;
    BOOL _requiresDataLoad;
    BOOL _viewLoaded;
    BOOL _landscape;
}

@property (retain) FUFlightView *regularFlightView;
@property (retain) FUFlightView *horizontalFlightView;
@property (retain) FUFlightView *compactFlightView;
@property (weak) FUErrorView *errorView;
@property (weak) FULoadingView *loadingView;
@property (retain) NSNumber *flightCode;
@property (retain) NSString *airlineCode;
@property (readonly, nonatomic) FUFlightView *flightView;
@property (retain, nonatomic) NSArray *flights;
@property (nonatomic) long long selectedFlight;
@property (nonatomic) long long selectedLeg;
@property (nonatomic) BOOL highlightCurrentFlightLeg;
@property (nonatomic) BOOL showInfoPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)awakeFromNib;
- (void)commonInit;
- (void)viewDidLoad;
- (void)setDisplayStyle:(unsigned long long)a0;
- (BOOL)_canShowWhileLocked;
- (void)hideView:(id)a0;
- (void)showView:(id)a0;
- (id)initWithFlightCode:(unsigned long long)a0 airlineCode:(id)a1;
- (void)addFittingView:(id)a0;
- (void)showLoadingView;
- (void)fadeLayer:(id)a0 visible:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)flightView:(id)a0 didSelectLeg:(long long)a1 ofFlight:(long long)a2;
- (id)initWithFlights:(id)a0;
- (id)initWithSFFlight:(id)a0 leg:(long long)a1 style:(unsigned long long)a2 delegate:(id)a3;
- (id)initWithSFFlights:(id)a0;
- (void)loadFlightWithFlightCode:(id)a0 airlineCode:(id)a1 date:(id)a2;
- (void)setFlights:(id)a0 selectedFlight:(long long)a1 selectedLeg:(long long)a2;
- (void)showErrorView;
- (void)showFlightView;

@end
