@class NSString;
@protocol LACDTOKVStore;

@interface LACDTOLocationProviderKVSAdapter : NSObject <LACDTOLocationProvider> {
    id<LACDTOKVStore> _kvStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
