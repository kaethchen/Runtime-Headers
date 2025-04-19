@class HMBLocalZone, HMDHomeManager, HMDLegacyCloudDatabase, NSMutableDictionary, HMDMutableHomeData, NSString;
@protocol HMDAppleAccessoryPairingControllerDataSource;

@interface HMDAppleAccessoryPairingController : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak) HMDHomeManager *homeManager;
@property (retain) id<HMDAppleAccessoryPairingControllerDataSource> dataSource;
@property (retain) HMDLegacyCloudDatabase *legacyCloudDatabase;
@property (retain) HMBLocalZone *homeManagerZone;
@property (retain) HMBLocalZone *blobZone;
@property (retain) NSMutableDictionary *pairingHomes;
@property (retain) HMDMutableHomeData *homeData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)start;
- (BOOL)handleMessage:(id)a0 from:(id)a1;
- (id)initWithHomeManager:(id)a0 dataSource:(id)a1;
- (id)cleanUpBadHomeManagerRecordsForHomeManager:(id)a0;
- (void)generateModelChangesForHomeManager:(id)a0 homeName:(id)a1 pairingHomeUUID:(id)a2 defaultRoomUUID:(id)a3 homeZoneUUID:(id)a4 accessory:(id)a5 outBlobChanges:(id *)a6 outLegacyChanges:(id *)a7 outHomeManagerChanges:(id *)a8;
- (BOOL)pairAccessory:(id)a0;
- (void)removeControllerForZone:(id)a0;

@end
