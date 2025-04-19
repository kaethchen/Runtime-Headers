@class NSString, LNStaticDeferredLocalizedString, LNValueType;

@interface LNPropertyMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) LNValueType *valueType;
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *title;
@property (readonly, nonatomic) unsigned long long capabilities;
@property (readonly, copy, nonatomic) NSString *updateActionIdentifier;
@property (readonly, nonatomic, getter=isOptional) BOOL optional;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithDescriptiveMetadataFromProperty:(id)a0 usingLibraryKey:(id)a1;
- (id)initWithIdentifier:(id)a0 valueType:(id)a1 title:(id)a2;
- (id)initWithIdentifier:(id)a0 valueType:(id)a1 title:(id)a2 capabilities:(unsigned long long)a3;
- (id)initWithIdentifier:(id)a0 valueType:(id)a1 title:(id)a2 capabilities:(unsigned long long)a3 updateActionIdentifier:(id)a4;
- (id)initWithIdentifier:(id)a0 valueType:(id)a1 title:(id)a2 capabilities:(unsigned long long)a3 updateActionIdentifier:(id)a4 optional:(BOOL)a5;

@end
