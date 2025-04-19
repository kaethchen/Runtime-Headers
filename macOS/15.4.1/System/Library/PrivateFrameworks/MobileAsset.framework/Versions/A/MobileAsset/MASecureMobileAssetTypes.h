@class NSDictionary;

@interface MASecureMobileAssetTypes : NSObject

@property (retain) NSDictionary *types;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)supportsDarwin:(id)a0;
- (id)_loadTypes;
- (BOOL)fsTag:(unsigned int *)a0 forAssetType:(id)a1 specifier:(id)a2;

@end
