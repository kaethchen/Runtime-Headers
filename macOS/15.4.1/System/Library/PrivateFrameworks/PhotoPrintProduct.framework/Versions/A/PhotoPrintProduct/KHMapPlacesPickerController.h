@class NSTextField, NSString, NSScrollView, KHMapView, KHPlusMinusFooterView, NSMutableArray, NSButton, NSTableView;

@interface KHMapPlacesPickerController : UXViewController <NSTableViewDataSource, NSTableViewDelegate, NSTextFieldDelegate>

@property (retain) NSTableView *placesTable;
@property (retain) NSScrollView *placesTableContainer;
@property (retain) NSTextField *placesTitle;
@property (retain) NSButton *addButton;
@property (retain) NSButton *removeButton;
@property (retain) NSButton *showLabelsButton;
@property (retain) KHPlusMinusFooterView *tableFooter;
@property (retain) NSMutableArray *observedMarkers;
@property (retain, nonatomic) KHMapView *mapView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_reloadData;
- (BOOL)control:(id)a0 textShouldEndEditing:(id)a1;
- (long long)numberOfRowsInTableView:(id)a0;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)addMapMarker:(id)a0;
- (void)markerButtonClicked:(id)a0;
- (void)observeMarkers;
- (void)removeMapMarker:(id)a0;
- (void)setMarkersHidden:(id)a0;
- (void)unObserveMarkers;

@end
