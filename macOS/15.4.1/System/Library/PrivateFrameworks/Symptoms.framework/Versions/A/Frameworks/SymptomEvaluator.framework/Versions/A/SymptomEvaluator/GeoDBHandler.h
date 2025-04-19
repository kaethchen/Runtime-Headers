@class NetworkStateRelay, NSString, LocationStateRelay, CellularStateRelay, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface GeoDBHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol> {
    unsigned int _adminState;
    CellularStateRelay *_cellRelay;
    NetworkStateRelay *_wifiRelay;
    NetworkStateRelay *_wiredRelay;
    LocationStateRelay *_locationRelay;
    id _relayReadyObserver;
    id _cellEpochObserver;
    id _wifiEpochObserver;
    id _wiredEpochObserver;
    NSString *_cellIPPrefix;
    NSString *_wifiIPPrefix;
    NSString *_wiredIPPrefix;
    NSString *_lastDonatedCellIPPrefix;
    NSString *_lastDonatedWiFiIPPrefix;
    NSString *_lastDonatedWiredIPPrefix;
    NSDate *_lastDonatedCellIPPrefixDate;
    NSDate *_lastDonatedWiFiIPPrefixDate;
    NSDate *_lastDonatedWiredIPPrefixDate;
    BOOL _adminStateSettled;
    BOOL _cellEpochReady;
    BOOL _wifiEpochReady;
    BOOL _wiredEpochReady;
    BOOL _isDnUOptedIn;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)coordinatesToGeoHashWithLength:(unsigned long long)a0 latitude:(double)a1 longitude:(double)a2;
- (void)completeInitialization;
- (void)donateBiomeEventForEdgeSelectionWithPrefix:(id)a0 interfaceType:(id)a1 radioType:(id)a2 radioBand:(id)a3 latitude:(double)a4 longitude:(double)a5 reply:(id /* block */)a6;
- (void)processSymptomForInterfaceType:(long long)a0;
- (BOOL)processSymptom:(id)a0;
- (void)_administrativeDisable;
- (void)_administrativeEnable;
- (int)configureInstance:(id)a0;
- (void)donateBiomeEventForEdgeSelectionWithPrefixComplete:(id)a0 error:(id)a1;
- (id)fetchEstimatedISOCountryCode;
- (BOOL)noteSymptom:(id)a0;
- (long long)nwInterfaceTypeFromAPSDInterface:(unsigned long long)a0;
- (int)read:(id)a0 returnedValues:(id)a1;

@end
