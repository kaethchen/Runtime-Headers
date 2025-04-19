@class NSArray;

@interface PKPassTileMetadataVehicleFunction : PKPassTileMetadata

@property (copy, nonatomic) NSArray *vehicleFunctions;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_setUpWithDictionary:(id)a0 privateDictionary:(id)a1;

@end
