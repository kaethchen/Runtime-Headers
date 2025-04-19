@class NSMutableDictionary, NSSet, NSString, TVRCMatchPointDeviceQuery, TVRCRapportDeviceQuery;
@protocol TVRXDeviceQueryDelegate;

@interface TVRXDeviceQuery : NSObject <TVRCServiceDeviceQueryDelegate>

@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) NSMutableDictionary *deviceMap;
@property (retain, nonatomic) TVRCRapportDeviceQuery *rapportDeviceQuery;
@property (retain, nonatomic) TVRCMatchPointDeviceQuery *matchPointQuery;
@property (weak, nonatomic) id<TVRXDeviceQueryDelegate> delegate;
@property (readonly, copy, nonatomic) NSSet *devices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)_notifyDelegateDidUpdateDevices;
- (id)_findDeviceForIdentifier:(id)a0 createIfNeeded:(BOOL)a1;
- (void)_startSearch;
- (void)_stopSearch;
- (void)addedDevice:(id)a0;
- (void)removedDevice:(id)a0;

@end
