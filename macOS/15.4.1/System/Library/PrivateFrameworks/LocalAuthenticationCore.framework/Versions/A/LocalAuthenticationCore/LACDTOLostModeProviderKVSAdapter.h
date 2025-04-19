@class NSString;
@protocol LACDTOKVStore;

@interface LACDTOLostModeProviderKVSAdapter : NSObject <LACDTOLostModeProvider> {
    id<LACDTOKVStore> _kvStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
