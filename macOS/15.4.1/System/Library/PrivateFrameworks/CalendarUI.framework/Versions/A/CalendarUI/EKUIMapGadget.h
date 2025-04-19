@class NSTextField, NSString, EKUIMapContainerView, EKUIMapView, NSDateComponents, NSDictionary, NSImageView, EKUIWeatherBox, CLLocation;

@interface EKUIMapGadget : EKUISingleViewGadget <MKMapViewDelegate>

@property (retain) EKUIMapContainerView *containerView;
@property (retain) EKUIMapView *mapView;
@property (retain) EKUIWeatherBox *weatherview;
@property (retain) NSImageView *weatherIconView;
@property (retain) NSTextField *temperatureField;
@property (retain) NSTextField *cityNameField;
@property (retain) CLLocation *lastFetchedWeatherLocation;
@property (retain) NSDateComponents *lastFetchedWeatherDateComponents;
@property (retain) NSDictionary *layoutMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interestedChangeKeys;

- (void).cxx_destruct;
- (BOOL)isEditable;
- (id)control;
- (id)initWithViewController:(id)a0;
- (id)mapView:(id)a0 viewForAnnotation:(id)a1;
- (id)cityAndStateFromPlacemark:(id)a0;
- (BOOL)currentOccurrenceHasStartDateComponents:(id)a0 location:(id)a1;
- (id)dateComponentsForWeather;
- (BOOL)lastFetchedWeatherIsValidForCurrentOccurrence;
- (void)launchWeatherRequestForLocation:(id)a0;
- (void)layoutWeather;
- (id)localizedStringWithUnitSymbolsUsingTemperature:(long long)a0;
- (id)locationToDisplay;
- (void)setUpMapView;
- (BOOL)shouldDisplay;
- (void)updateMapViewWithLocation:(id)a0 startLocation:(id)a1;
- (void)updateWithChanges:(id)a0;
- (id)weatherStringForWeatherData:(id)a0;

@end
