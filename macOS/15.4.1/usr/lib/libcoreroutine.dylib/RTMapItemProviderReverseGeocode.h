@class RTMapItemProviderReverseGeocodeParameters, RTMapServiceManager, NSString;

@interface RTMapItemProviderReverseGeocode : NSObject <RTMapItemProvider>

@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;
@property (retain, nonatomic) RTMapItemProviderReverseGeocodeParameters *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (double)_confidenceForSource:(unsigned long long)a0;
- (id)_filterRelatedPlacesMapItems:(id)a0;
- (id)_selectMapItemsFromFetchedMapItems:(id)a0 relatedPlacesMapItems:(id)a1 options:(id)a2 error:(id *)a3;
- (id)initWithDefaultsManager:(id)a0 mapServiceManager:(id)a1;
- (id)initWithMapServiceManager:(id)a0 parameters:(id)a1;
- (id)mapItemsWithOptions:(id)a0 error:(id *)a1;
- (BOOL)skipForOptions:(id)a0 error:(id *)a1;

@end
