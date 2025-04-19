@class GEOMapURLBuilder;

@interface MKURLBuilder : NSObject {
    GEOMapURLBuilder *_realBuilder;
}

+ (id)URLForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 address:(id)a1 label:(id)a2;
+ (id)URLForAddress:(id)a0;
+ (id)URLForAddress:(id)a0 abPersonID:(long long)a1 abAddressID:(long long)a2 cnContactIdentifier:(id)a3 cnAddressIdentifier:(id)a4;
+ (id)URLForAddress:(id)a0 label:(id)a1;
+ (id)URLForCollectionStorage:(id)a0;
+ (id)URLForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
+ (id)URLForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 address:(id)a1 label:(id)a2 extraStorage:(id)a3;
+ (id)URLForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 address:(id)a1 label:(id)a2 extraStorage:(id)a3 useWebPlaceCard:(BOOL)a4;
+ (id)URLForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 address:(id)a1 label:(id)a2 extraStorage:(id)a3 useWebPlaceCard:(BOOL)a4 muninViewState:(id)a5;
+ (id)URLForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 address:(id)a1 label:(id)a2 mapItemIdentifier:(id)a3;
+ (id)URLForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 address:(id)a1 label:(id)a2 mapItemIdentifier:(id)a3 extraStorage:(id)a4 useWebPlaceCard:(BOOL)a5;
+ (id)URLForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 address:(id)a1 label:(id)a2 mapItemIdentifier:(id)a3 extraStorage:(id)a4 useWebPlaceCard:(BOOL)a5 muninViewState:(id)a6;
+ (id)URLForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 label:(id)a1;
+ (id)URLForDirectionsFrom:(id)a0 to:(id)a1;
+ (id)URLForDirectionsFrom:(id)a0 to:(id)a1 transport:(unsigned long long)a2;
+ (id)URLForDirectionsFrom:(id)a0 toDestinations:(id)a1;
+ (id)URLForDirectionsFrom:(id)a0 toDestinations:(id)a1 transport:(unsigned long long)a2;
+ (id)URLForDirectionsFromHereTo:(id)a0;
+ (id)URLForDirectionsFromHereTo:(id)a0 label:(id)a1 muid:(unsigned long long)a2 provider:(int)a3 transport:(unsigned long long)a4;
+ (id)URLForDirectionsFromHereTo:(id)a0 transport:(unsigned long long)a1;
+ (id)URLForDirectionsFromHereToDestinations:(id)a0;
+ (id)URLForDirectionsFromHereToDestinations:(id)a0 transport:(unsigned long long)a1;
+ (id)URLForExternalBusiness:(id)a0 id:(id)a1 ofContentProvider:(id)a2;
+ (id)URLForInternalBusiness:(id)a0 id:(unsigned long long)a1 provider:(int)a2;
+ (id)URLForInternalBusiness:(id)a0 id:(unsigned long long)a1 provider:(int)a2 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a3 address:(id)a4;
+ (id)URLForInternalBusiness:(id)a0 id:(unsigned long long)a1 provider:(int)a2 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a3 address:(id)a4 extraStorage:(id)a5;
+ (id)URLForInternalBusiness:(id)a0 id:(unsigned long long)a1 provider:(int)a2 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a3 address:(id)a4 extraStorage:(id)a5 useWebPlaceCard:(BOOL)a6;
+ (id)URLForInternalBusiness:(id)a0 id:(unsigned long long)a1 provider:(int)a2 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a3 address:(id)a4 extraStorage:(id)a5 useWebPlaceCard:(BOOL)a6 enrichmentInfo:(id)a7;
+ (id)URLForInternalBusiness:(id)a0 id:(unsigned long long)a1 provider:(int)a2 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a3 address:(id)a4 extraStorage:(id)a5 useWebPlaceCard:(BOOL)a6 muninViewState:(id)a7;
+ (id)URLForMapFrameWithCenter:(struct CLLocationCoordinate2D { double x0; double x1; })a0 distance:(double)a1 heading:(double)a2 pitch:(double)a3 mapType:(unsigned long long)a4 trackingMode:(long long)a5 span:(struct { double x0; double x1; })a6;
+ (id)URLForSearch:(id)a0;
+ (id)URLForSearch:(id)a0 at:(struct CLLocationCoordinate2D { double x0; double x1; })a1 span:(struct { double x0; double x1; })a2;
+ (id)URLForSearch:(id)a0 at:(struct CLLocationCoordinate2D { double x0; double x1; })a1 zoomLevel:(double)a2;
+ (id)URLForSearch:(id)a0 near:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
+ (id)URLForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 address:(id)a1 label:(id)a2 useWebPlaceCard:(BOOL)a3;
+ (id)URLForInternalBusiness:(id)a0 id:(unsigned long long)a1 provider:(int)a2 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a3 address:(id)a4 useWebPlaceCard:(BOOL)a5;
+ (id)URLForInternalBusiness:(id)a0 id:(unsigned long long)a1 provider:(int)a2 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a3 address:(id)a4 useWebPlaceCard:(BOOL)a5 mapItemData:(id)a6;

- (void).cxx_destruct;
- (id)build;
- (void)setTransportType:(unsigned long long)a0;
- (void)setStartAddress:(id)a0;
- (void)setContentProvider:(id)a0;
- (id)buildForDefaultNavigation;
- (id)buildForWeb;
- (id)initForAddress:(id)a0 abPersonID:(long long)a1 abAddressID:(long long)a2 cnContactIdentifier:(id)a3 cnAddressIdentifier:(id)a4;
- (id)initForAddress:(id)a0 label:(id)a1;
- (id)initForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 address:(id)a1 label:(id)a2;
- (id)initForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 address:(id)a1 label:(id)a2 mapItemIdentifier:(id)a3;
- (id)initForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 label:(id)a1;
- (id)initForDirectionsTo:(id)a0;
- (id)initForDirectionsToAddresses:(id)a0;
- (id)initForExternalBusiness:(id)a0 id:(id)a1 ofContentProvider:(id)a2;
- (id)initForInternalBusiness:(id)a0 id:(unsigned long long)a1 provider:(int)a2;
- (id)initForMapFrameWithCenter:(struct CLLocationCoordinate2D { double x0; double x1; })a0 distance:(double)a1 heading:(double)a2 pitch:(double)a3 mapType:(unsigned long long)a4 trackingMode:(long long)a5 span:(struct { double x0; double x1; })a6;
- (id)initForSearch:(id)a0;
- (void)setBusinessAddress:(id)a0;
- (void)setBusinessCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void)setDestinationLabel:(id)a0;
- (void)setDestinationMUID:(unsigned long long)a0 provider:(int)a1;
- (void)setDisplayRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (void)setMapType:(unsigned long long)a0;
- (void)setNear:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void)setSearchLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0 span:(struct { double x0; double x1; })a1;
- (void)setSearchLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0 zoomLevel:(double)a1;
- (void)setUserTrackingMode:(long long)a0;
- (id)initForMapFrameWithCenter:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (id)initForMapFrameWithCenter:(struct CLLocationCoordinate2D { double x0; double x1; })a0 distance:(double)a1 heading:(double)a2 pitch:(double)a3;

@end
