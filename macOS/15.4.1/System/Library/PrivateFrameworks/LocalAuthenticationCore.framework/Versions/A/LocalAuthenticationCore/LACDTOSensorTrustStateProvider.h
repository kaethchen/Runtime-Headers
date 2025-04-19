@class NSString;
@protocol LACDTOKVStore;

@interface LACDTOSensorTrustStateProvider : NSObject <LACDTOSensorTrustStateProvider> {
    id<LACDTOKVStore> _store;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
