@class NSString, HKTaskServerProxyProvider, HKHealthStore;

@interface HKCloudSyncShareParticipantManager : NSObject <_HKXPCExportable> {
    HKTaskServerProxyProvider *_proxyProvider;
    HKHealthStore *_healthStore;
}

@property (readonly, nonatomic) long long lastKnownParticipantSharingStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;
+ (id)clientInterface;
+ (id)serverInterface;

- (void).cxx_destruct;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)a0;
- (void)fetchAllShareParticipantEmailAddressesForSharingType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)revokeAccessForAllShareParticipantsForSharingType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)tearDownHealthSharingForProfile:(id)a0 completion:(id /* block */)a1;

@end
