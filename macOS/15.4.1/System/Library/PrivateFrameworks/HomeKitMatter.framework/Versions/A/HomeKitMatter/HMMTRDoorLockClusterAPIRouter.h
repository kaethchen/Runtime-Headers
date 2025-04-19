@class NSNumber, MTRDevice, MTRClusterDoorLock, NSObject;
@protocol OS_dispatch_queue;

@interface HMMTRDoorLockClusterAPIRouter : NSObject

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak) MTRClusterDoorLock *doorLock;
@property (readonly) MTRDevice *device;
@property (retain) NSNumber *nsNumberIsCustomClusterAvailable;

+ (id)doorLockFeatureMapSupportsAppleCustomAliroBLEUWB:(id)a0;
+ (id)doorLockFeatureMapSupportsAppleCustomAliroProvisioning:(id)a0;
+ (id)aliroClearCredentialParamsFromParams:(id)a0 flow:(id)a1;
+ (id)aliroCredentialFromCredential:(id)a0 flow:(id)a1;
+ (id)aliroCredentialTypeForCredentialType:(id)a0 flow:(id)a1;
+ (id)aliroGetCredentialParamsFromParams:(id)a0 flow:(id)a1;
+ (id)aliroReaderConfigParamsFromParams:(id)a0;
+ (id)aliroSetCredentialParamsFromParams:(id)a0 flow:(id)a1;
+ (id)arrayOfDataFromRead:(id)a0;
+ (id)credentialTypeForAliroCredentialType:(unsigned char)a0 flow:(id)a1;
+ (BOOL)isCredentialTypeAliro:(id)a0;
+ (id)mergeAndRemoveDuplicatesFromArray:(id)a0 andArray:(id)a1;
+ (id)readerConfigParamsFromReaderConfig:(id)a0;

- (void).cxx_destruct;
- (id)appendAliroCredentialsToUser:(id)a0 aliroCredentials:(id)a1;
- (void)clearCredentialWithParams:(id)a0 flow:(id)a1 completion:(id /* block */)a2;
- (void)fetchAppleClusterFeaturesWithFlow:(id)a0 completion:(id /* block */)a1;
- (id)getAliroCredentialAtIndex:(long long)a0 forCredentialType:(long long)a1 flow:(id)a2;
- (id)getAppleAliroCredentialsWithCredentialType:(long long)a0 startingAtIndex:(long long)a1 credentials:(id)a2 flow:(id)a3;
- (void)getCredentialStatusWithParams:(id)a0 flow:(id)a1 completion:(id /* block */)a2;
- (void)getUserWithParams:(id)a0 includeAliroCredentials:(BOOL)a1 temporaryCachedAliroCredentials:(id)a2 flow:(id)a3 completion:(id /* block */)a4;
- (id)initWithDoorLock:(id)a0 device:(id)a1 queue:(id)a2;
- (void)isCustomClusterAvailableWithFlow:(id)a0 completion:(id /* block */)a1;
- (void)numberOfAliroDeviceKeyCredentialsSupportedWithFlow:(id)a0 completion:(id /* block */)a1;
- (void)numberOfAliroIssuerKeyCredentialsSupportedWithFlow:(id)a0 completion:(id /* block */)a1;
- (void)readAttributeAliroBLEAdvertisingVersionWithFlow:(id)a0 completion:(id /* block */)a1;
- (void)readAttributeAliroExpeditedTransactionSupportedProtocolVersionsWithFlow:(id)a0 completion:(id /* block */)a1;
- (void)readAttributeAliroGroupResolvingKeyWithFlow:(id)a0 completion:(id /* block */)a1;
- (void)readAttributeAliroReaderGroupIdentifierWithFlow:(id)a0 completion:(id /* block */)a1;
- (void)readAttributeAliroReaderVerificationKeyWithFlow:(id)a0 completion:(id /* block */)a1;
- (void)readAttributeAliroSupportedBLEUWBProtocolVersionsWithFlow:(id)a0 completion:(id /* block */)a1;
- (void)setAliroReaderConfigWithConfig:(id)a0 flow:(id)a1 completion:(id /* block */)a2;
- (void)setCredentialWithParams:(id)a0 flow:(id)a1 completion:(id /* block */)a2;

@end
