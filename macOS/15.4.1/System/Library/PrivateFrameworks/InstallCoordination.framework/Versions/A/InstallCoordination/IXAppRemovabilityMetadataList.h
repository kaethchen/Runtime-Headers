@class NSDictionary;

@interface IXAppRemovabilityMetadataList : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *clientToRemovabilityMetadataMap;
@property (readonly, nonatomic) NSDictionary *propertyListRepresentation;
@property (readonly, nonatomic) BOOL isEmpty;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMetadataDictionary:(id)a0;
- (void)updateRemovabilityWithMetadata:(id)a0;
- (id)initWithInitialRemovability:(unsigned long long)a0 client:(unsigned long long)a1;
- (id)initWithInitialRemovabilityMetadata:(id)a0;
- (id)initWithSerializedDictionary:(id)a0;
- (id)mostRestrictiveRemovabilityMetadata;
- (unsigned long long)removabilityForClient:(unsigned long long)a0 notFoundRemovability:(unsigned long long)a1;
- (void)updateRemovability:(unsigned long long)a0 forClient:(unsigned long long)a1;

@end
