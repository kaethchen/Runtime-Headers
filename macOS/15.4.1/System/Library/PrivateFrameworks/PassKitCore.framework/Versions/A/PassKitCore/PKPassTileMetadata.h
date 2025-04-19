@class PKPassTileMetadataVerticalFlowGroup, PKPassTileMetadataVehicleFunction, NSString, PKPassTileMetadataHorizontalFlowGroup;

@interface PKPassTileMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKPassTileMetadataVerticalFlowGroup *metadataTypeVerticalFlowGroup;
@property (readonly, nonatomic) PKPassTileMetadataHorizontalFlowGroup *metadataTypeHorizontalFlowGroup;
@property (readonly, nonatomic) PKPassTileMetadataVehicleFunction *metadataTypeVehicleFunction;
@property (nonatomic) long long preferredStyle;
@property (nonatomic, getter=isSelectable) BOOL selectable;
@property (nonatomic) BOOL showInPrearm;
@property (nonatomic) long long context;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long type;

+ (id)_createDictionaryMapForDictionaries:(id)a0;
+ (id)_createMetadataForType:(long long)a0 identifier:(id)a1 context:(long long)a2;
+ (id)_createWithDictionary:(id)a0 privateDictionaryMap:(id)a1 privateDictionary:(id *)a2 context:(long long)a3;
+ (BOOL)isGroupType:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_setUpWithDictionary:(id)a0 privateDictionary:(id)a1;
- (BOOL)isGroupType;

@end
