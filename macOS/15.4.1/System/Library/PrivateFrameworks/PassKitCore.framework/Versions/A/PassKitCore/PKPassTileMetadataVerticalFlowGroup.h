@interface PKPassTileMetadataVerticalFlowGroup : PKPassTileMetadata

@property (nonatomic) unsigned long long rows;
@property (nonatomic) long long widthClass;
@property (nonatomic) long long heightClass;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_setUpWithDictionary:(id)a0 privateDictionary:(id)a1;

@end
