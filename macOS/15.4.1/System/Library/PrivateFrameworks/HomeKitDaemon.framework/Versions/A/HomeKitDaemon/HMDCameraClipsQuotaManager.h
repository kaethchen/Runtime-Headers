@class NSString;
@protocol HMDDatabase;

@interface HMDCameraClipsQuotaManager : NSObject <HMDDatabaseDelegate, HMFLogging>

@property (class, readonly) HMDCameraClipsQuotaManager *defaultManager;

@property (readonly) id<HMDDatabase> database;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)_quotaErrorFromServerError:(id)a0;
+ (id)_quotaServerErrorFromServerError:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)synchronize;
- (id)initWithDatabase:(id)a0;
- (id)logIdentifier;
- (id)_addCodeOperationWithFunctionName:(id)a0 request:(id)a1 responseClass:(Class)a2;
- (id)database:(id)a0 willRemoveZoneWithName:(id)a1 isPrivate:(BOOL)a2;
- (id)disableCloudStorageForZoneWithName:(id)a0;
- (id)enableCloudStorageForZoneWithName:(id)a0;
- (id)fetchNamesForZonesWithEnabledCloudStorage;

@end
