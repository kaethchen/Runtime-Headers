@class NSArray, PKPassTileMetadata, NSDictionary, NSString;

@interface PKPassTileDescriptor : NSObject

@property (retain, nonatomic) PKPassTileMetadata *metadata;
@property (copy, nonatomic) NSDictionary *states;
@property (copy, nonatomic) NSArray *childDescriptors;
@property (copy, nonatomic) NSString *defaultStateIdentifier;
@property (nonatomic, getter=isDefaultEnabled) BOOL defaultEnabled;

+ (id)createWithPassDictionary:(id)a0 privateDictionary:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (id)createTileForState:(id)a0 childTiles:(id)a1 withBundle:(id)a2 privateBundle:(id)a3;

@end
