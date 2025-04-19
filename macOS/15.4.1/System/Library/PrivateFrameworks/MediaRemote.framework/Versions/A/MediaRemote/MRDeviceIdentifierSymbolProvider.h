@class NSMutableDictionary;

@interface MRDeviceIdentifierSymbolProvider : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) NSMutableDictionary *cache;

+ (id)sharedProvider;
+ (id)currentDeviceRoutingSymbolName;

- (id)init;
- (void).cxx_destruct;
- (id)symbolNameForProductIdentifier:(id)a0;
- (id)symbolNameForModelID:(id)a0;

@end
