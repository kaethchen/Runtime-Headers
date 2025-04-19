@class NSMutableDictionary, NSSet, NSArray, NSMutableOrderedSet, NSString, NSObject, IDSBatchIDQueryController;
@protocol SSDevicesAndContactsDelegate;

@interface SSDevicesAndContacts : NSObject <IDSBatchIDQueryControllerDelegate, IDSServiceDelegate>

@property BOOL testMode;
@property (retain) NSSet *recentSet;
@property int maxItemsPerType;
@property NSObject<SSDevicesAndContactsDelegate> *delegate;
@property (retain) NSMutableOrderedSet *deviceComputers;
@property (retain) NSArray *idsDevices;
@property (retain) NSArray *vettedAppleIDs;
@property (retain) NSString *localDeviceID;
@property (retain) IDSBatchIDQueryController *idQueryController;
@property (retain) IDSBatchIDQueryController *idQuerySafeViewController;
@property (retain) NSMutableDictionary *availabilityByID;
@property (retain) NSMutableDictionary *ipBasedRecents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)colorWithHexColorString:(id)a0;

- (void)dealloc;
- (id)init;
- (void)service:(id)a0 devicesChanged:(id)a1;
- (void)batchQueryController:(id)a0 updatedDestinationsStatus:(id)a1 onService:(id)a2 error:(id)a3;
- (void)idStatusUpdatedForDestinations:(id)a0;
- (id)deviceForUniqueID:(id)a0;
- (void)loadDeviceList:(id)a0;
- (void)addDevices:(id)a0 withLoginID:(id)a1 isIOS:(BOOL)a2;
- (BOOL)addressIsSelf:(id)a0;
- (id)availableComputersWithSearchString:(id)a0;
- (id)availableContactsWithSearchString:(id)a0;
- (id)availableIDSDevicesWithSearchString:(id)a0;
- (void)clearRecentItems;
- (id)componentsForBuildVersion:(id)a0;
- (void)loadRecentItemsAtPath:(id)a0 sinceDate:(id)a1;
- (id)modelNameWithModelID:(id)a0 major:(long long *)a1 minor:(long long *)a2;
- (id)recentAvailableComputers;
- (id)recentAvailableContacts;

@end
