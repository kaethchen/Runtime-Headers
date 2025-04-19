@class NSURL, NSString, CCDatabaseSetStateReader, CCDatabaseDeviceMapping, NSObject, CCSet;
@protocol CCDonateServiceProvider;

@interface CCSetVersionedMergeable : NSObject <CKVersionedMergeable> {
    CCSet *_set;
    CCDatabaseSetStateReader *_stateReader;
    NSObject<CCDonateServiceProvider> *_donateServiceProvider;
    CCDatabaseDeviceMapping *_cachedDeviceMapping;
    NSURL *_mergeableDeltasFileURL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)emptyStateVector;
+ (id)readOnlyInstanceForSet:(id)a0 mergeableDeltasFileURL:(id)a1 database:(id)a2;
+ (id)writeOnlyInstanceForSet:(id)a0 donateServiceProvider:(id)a1;

- (void).cxx_destruct;
- (BOOL)mergeDeltas:(id)a0 error:(id *)a1;
- (id)mergeableDeltasForMetadata:(id)a0 error:(id *)a1;
- (id)stateVector;
- (id)localDeviceSite;
- (BOOL)_loadCachedDeviceMapping:(id *)a0;
- (id)initWithSet:(id)a0 readAccess:(id)a1 donateServiceProvider:(id)a2 mergeableDeltasFileURL:(id)a3;
- (BOOL)mergeDelta:(id)a0 fromDeviceSite:(id)a1 relayedDeviceSites:(id)a2;
- (id)mergeableDeltaAfterStateVector:(id)a0 atomBatchVersion:(unsigned char)a1 options:(unsigned short)a2;
- (id)mergeableDeltasForMetadata:(id)a0 atomBatchVersion:(unsigned char)a1 error:(id *)a2;
- (id)relayedDeviceSitesNotIncludingRequestingDeviceSite:(id)a0;

@end
