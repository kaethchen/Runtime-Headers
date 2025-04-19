@interface PKPassTileMetadataHorizontalFlowGroup : PKPassTileMetadata

@property (nonatomic) unsigned long long columns;
@property (nonatomic) unsigned long long maximumRows;
@property (nonatomic) long long widthClass;
@property (nonatomic) long long heightClass;
@property (nonatomic) unsigned long long groupStyle;

+ (BOOL)supportsSecureCoding;
+ (id)_createDefaultDashboardGroupMetadata;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_setUpWithDictionary:(id)a0 privateDictionary:(id)a1;

@end
