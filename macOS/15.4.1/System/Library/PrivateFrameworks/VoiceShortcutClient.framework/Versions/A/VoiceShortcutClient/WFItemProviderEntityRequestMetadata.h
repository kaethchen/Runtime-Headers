@class LNEntityMetadata, LNEntity;

@interface WFItemProviderEntityRequestMetadata : WFItemProviderRequestMetadata

@property (readonly, nonatomic) LNEntity *entity;
@property (readonly, nonatomic) LNEntityMetadata *metadata;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)registeredTypeIdentifiers;
- (void)fetchLinkMetadataWithCompletion:(id /* block */)a0;
- (id)initWithEntity:(id)a0 metadata:(id)a1;

@end
