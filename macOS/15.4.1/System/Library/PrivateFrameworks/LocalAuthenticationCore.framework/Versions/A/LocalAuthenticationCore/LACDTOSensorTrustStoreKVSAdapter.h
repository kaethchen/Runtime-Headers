@class NSString;
@protocol LACDTOKVStoreWriter;

@interface LACDTOSensorTrustStoreKVSAdapter : NSObject <LACDTOSensorTrustStore> {
    id<LACDTOKVStoreWriter> _kvStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithKVStore:(id)a0;
- (void)storeSensorTrustState:(id)a0 completion:(id /* block */)a1;

@end
