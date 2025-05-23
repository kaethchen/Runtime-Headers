@class LNValueType, NSString, LNStaticDeferredLocalizedString, NSArray, NSDictionary;

@interface LNActionParameterMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL hasDynamicOptions;
@property (readonly, nonatomic) BOOL isInput;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) LNValueType *valueType;
@property (readonly, nonatomic, getter=isOptional) BOOL optional;
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *title;
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *parameterDescription;
@property (readonly, copy, nonatomic) NSArray *resolvableInputTypes;
@property (readonly, copy, nonatomic) NSDictionary *typeSpecificMetadata;
@property (readonly, nonatomic) long long dynamicOptionsSupport;
@property (readonly, nonatomic) long long inputConnectionBehavior;
@property (readonly, nonatomic) unsigned long long capabilities;
@property (readonly, copy, nonatomic) NSString *queryIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 valueType:(id)a1 optional:(BOOL)a2 title:(id)a3 description:(id)a4 resolvableInputTypes:(id)a5 typeSpecificMetadata:(id)a6 dynamicOptionsSupport:(long long)a7 inputConnectionBehavior:(long long)a8 capabilities:(unsigned long long)a9 queryIdentifier:(id)a10;
- (id)actionParameterMetadataWithCapabilities:(unsigned long long)a0;
- (id)actionParameterMetadataWithDescriptiveMetadataFromParameter:(id)a0 usingLibraryKey:(id)a1;
- (id)initWithName:(id)a0 valueType:(id)a1 optional:(BOOL)a2 title:(id)a3 description:(id)a4 resolvableInputTypes:(id)a5 typeSpecificMetadata:(id)a6;
- (id)initWithName:(id)a0 valueType:(id)a1 optional:(BOOL)a2 title:(id)a3 description:(id)a4 resolvableInputTypes:(id)a5 typeSpecificMetadata:(id)a6 dynamicOptionsSupport:(long long)a7 inputConnectionBehavior:(long long)a8;
- (id)initWithName:(id)a0 valueType:(id)a1 optional:(BOOL)a2 title:(id)a3 description:(id)a4 resolvableInputTypes:(id)a5 typeSpecificMetadata:(id)a6 dynamicOptionsSupport:(long long)a7 inputConnectionBehavior:(long long)a8 capabilities:(unsigned long long)a9;
- (id)initWithName:(id)a0 valueType:(id)a1 optional:(BOOL)a2 title:(id)a3 description:(id)a4 resolvableInputTypes:(id)a5 typeSpecificMetadata:(id)a6 dynamicOptionsSupport:(long long)a7 isInput:(BOOL)a8;
- (id)initWithName:(id)a0 valueType:(id)a1 optional:(BOOL)a2 title:(id)a3 resolvableInputTypes:(id)a4 typeSpecificMetadata:(id)a5;
- (id)initWithName:(id)a0 valueType:(id)a1 optional:(BOOL)a2 title:(id)a3 resolvableInputTypes:(id)a4 typeSpecificMetadata:(id)a5 dynamicOptionsSupport:(long long)a6;
- (id)initWithName:(id)a0 valueType:(id)a1 optional:(BOOL)a2 title:(id)a3 resolvableInputTypes:(id)a4 typeSpecificMetadata:(id)a5 dynamicOptionsSupport:(long long)a6 isInput:(BOOL)a7;
- (id)initWithName:(id)a0 valueType:(id)a1 optional:(BOOL)a2 title:(id)a3 resolvableInputTypes:(id)a4 typeSpecificMetadata:(id)a5 hasDynamicOptions:(BOOL)a6;

@end
