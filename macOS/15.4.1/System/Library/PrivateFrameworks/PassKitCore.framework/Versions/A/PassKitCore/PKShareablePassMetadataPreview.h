@class NSString;

@interface PKShareablePassMetadataPreview : PKAddPassMetadataPreview

@property (retain, nonatomic) NSString *provisioningTemplateIdentifier;
@property (retain, nonatomic) NSString *ownerDisplayName;

+ (BOOL)supportsSecureCoding;
+ (id)previewWithTemplateIdentifier:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_extendableDescription:(id)a0;
- (id)_initWithPassThumbnail:(struct CGImage { } *)a0 localizedDescription:(id)a1 provisioningTemplateIdentifier:(id)a2;
- (id)initWithTemplateIdentifier:(id)a0;

@end
