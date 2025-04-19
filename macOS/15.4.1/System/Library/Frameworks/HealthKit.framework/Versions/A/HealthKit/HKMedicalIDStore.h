@class NSString, HKTaskServerProxyProvider, _HKMedicalIDData;

@interface HKMedicalIDStore : NSObject <_HKXPCExportable> {
    HKTaskServerProxyProvider *_proxyProvider;
    HKTaskServerProxyProvider *_setupStatusProxyProvider;
    _HKMedicalIDData *_lastFetchedMedicalIDData;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) long long medicalIDSetUpStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;
+ (id)clientInterface;
+ (id)serverInterface;
+ (id)setupStatusClientInterface;
+ (id)setupStatusServerInterface;
+ (id)setupStatusTaskIdentifier;

- (void).cxx_destruct;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)fetchMedicalIDEmergencyContactsWithCompletion:(id /* block */)a0;
- (id)initWithHealthStore:(id)a0;
- (void)updateMedicalIDData:(id)a0 completion:(id /* block */)a1;
- (void)addEmergencyContact:(id)a0 completion:(id /* block */)a1;
- (void)deleteMedicalIDDataWithCompletion:(id /* block */)a0;
- (void)fetchMedicalIDClinicalContactsWithCompletion:(id /* block */)a0;
- (void)fetchMedicalIDDataIfSetUpOrCreateDefaultWithCompletion:(id /* block */)a0;
- (void)fetchMedicalIDDataWithCompletion:(id /* block */)a0;
- (id)lastFetchedMedicalIDData;
- (void)removeEmergencyContact:(id)a0 completion:(id /* block */)a1;
- (void)setLastFetchedMedicalIDData:(id)a0;

@end
