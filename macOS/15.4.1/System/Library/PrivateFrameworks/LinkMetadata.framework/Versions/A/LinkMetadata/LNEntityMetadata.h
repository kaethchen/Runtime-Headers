@class NSString, NSArray, LNStaticDeferredLocalizedString, NSOrderedSet, NSDictionary, LNVisibilityMetadata, LNTypeDisplayRepresentation, LNContentTypeMetadata;

@interface LNEntityMetadata : NSObject <NSSecureCoding, NSCopying, LNEffectiveBundleIdentifierGrouping, LNVisibilityQuery>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *typeName;
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *displayTypeName;
@property (readonly, copy, nonatomic) LNVisibilityMetadata *visibilityMetadata;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isTransient) BOOL transient;
@property (readonly, copy, nonatomic) NSString *mangledTypeName;
@property (readonly, copy, nonatomic) NSDictionary *mangledTypeNameByBundleIdentifier;
@property (readonly, copy, nonatomic) NSOrderedSet *effectiveBundleIdentifiers;
@property (readonly, copy, nonatomic) NSArray *properties;
@property (readonly, copy, nonatomic) LNTypeDisplayRepresentation *displayRepresentation;
@property (readonly, copy, nonatomic) NSString *customIntentTypeClassName;
@property (readonly, copy, nonatomic) NSDictionary *availabilityAnnotations;
@property (readonly, copy, nonatomic) NSArray *requiredCapabilities;
@property (readonly, copy, nonatomic) NSDictionary *systemProtocolMetadata;
@property (readonly, copy, nonatomic) LNContentTypeMetadata *transferableContentTypes;
@property (readonly, copy, nonatomic) NSString *defaultQueryIdentifier;
@property (readonly, copy, nonatomic) NSString *attributionBundleIdentifier;
@property (readonly, copy, nonatomic) NSArray *assistantDefinedSchemas;
@property (readonly, copy, nonatomic) NSString *fullyQualifiedTypeName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)mangledTypeNameForBundleIdentifier:(id)a0;
- (id)copyWithAdditionalTransferableContentTypes:(id)a0;
- (id)copyWithDescriptiveMetadataFromEntity:(id)a0 usingLibraryKey:(id)a1;
- (id)entityMetadataWithAttributionBundleIdentifier:(id)a0;
- (id)identifierIndexedProperties;
- (id)initWithIdentifier:(id)a0 transient:(BOOL)a1 mangledTypeName:(id)a2 mangledTypeNameByBundleIdentifier:(id)a3 effectiveBundleIdentifiers:(id)a4 displayRepresentation:(id)a5 properties:(id)a6 customIntentTypeClassName:(id)a7;
- (id)initWithIdentifier:(id)a0 transient:(BOOL)a1 mangledTypeName:(id)a2 mangledTypeNameByBundleIdentifier:(id)a3 effectiveBundleIdentifiers:(id)a4 displayRepresentation:(id)a5 properties:(id)a6 customIntentTypeClassName:(id)a7 availabilityAnnotations:(id)a8;
- (id)initWithIdentifier:(id)a0 transient:(BOOL)a1 mangledTypeName:(id)a2 mangledTypeNameByBundleIdentifier:(id)a3 effectiveBundleIdentifiers:(id)a4 displayRepresentation:(id)a5 properties:(id)a6 customIntentTypeClassName:(id)a7 availabilityAnnotations:(id)a8 requiredCapabilities:(id)a9 systemProtocolMetadata:(id)a10 attributionBundleIdentifier:(id)a11;
- (id)initWithIdentifier:(id)a0 transient:(BOOL)a1 mangledTypeName:(id)a2 mangledTypeNameByBundleIdentifier:(id)a3 effectiveBundleIdentifiers:(id)a4 displayRepresentation:(id)a5 properties:(id)a6 customIntentTypeClassName:(id)a7 availabilityAnnotations:(id)a8 requiredCapabilities:(id)a9 systemProtocolMetadata:(id)a10 attributionBundleIdentifier:(id)a11 transferableContentTypes:(id)a12;
- (id)initWithIdentifier:(id)a0 transient:(BOOL)a1 mangledTypeName:(id)a2 mangledTypeNameByBundleIdentifier:(id)a3 effectiveBundleIdentifiers:(id)a4 displayRepresentation:(id)a5 properties:(id)a6 customIntentTypeClassName:(id)a7 availabilityAnnotations:(id)a8 requiredCapabilities:(id)a9 systemProtocolMetadata:(id)a10 attributionBundleIdentifier:(id)a11 transferableContentTypes:(id)a12 assistantDefinedSchemas:(id)a13;
- (id)initWithIdentifier:(id)a0 transient:(BOOL)a1 mangledTypeName:(id)a2 mangledTypeNameByBundleIdentifier:(id)a3 effectiveBundleIdentifiers:(id)a4 displayRepresentation:(id)a5 properties:(id)a6 customIntentTypeClassName:(id)a7 availabilityAnnotations:(id)a8 requiredCapabilities:(id)a9 systemProtocolMetadata:(id)a10 attributionBundleIdentifier:(id)a11 transferableContentTypes:(id)a12 assistantDefinedSchemas:(id)a13 fullyQualifiedTypeName:(id)a14;
- (id)initWithIdentifier:(id)a0 transient:(BOOL)a1 mangledTypeName:(id)a2 mangledTypeNameByBundleIdentifier:(id)a3 effectiveBundleIdentifiers:(id)a4 displayRepresentation:(id)a5 properties:(id)a6 customIntentTypeClassName:(id)a7 availabilityAnnotations:(id)a8 requiredCapabilities:(id)a9 systemProtocolMetadata:(id)a10 attributionBundleIdentifier:(id)a11 transferableContentTypes:(id)a12 assistantDefinedSchemas:(id)a13 fullyQualifiedTypeName:(id)a14 visibilityMetadata:(id)a15;
- (id)initWithIdentifier:(id)a0 transient:(BOOL)a1 mangledTypeName:(id)a2 mangledTypeNameByBundleIdentifier:(id)a3 effectiveBundleIdentifiers:(id)a4 displayRepresentation:(id)a5 properties:(id)a6 customIntentTypeClassName:(id)a7 availabilityAnnotations:(id)a8 requiredCapabilities:(id)a9 systemProtocolMetadata:(id)a10 attributionBundleIdentifier:(id)a11 transferableContentTypes:(id)a12 assistantDefinedSchemas:(id)a13 fullyQualifiedTypeName:(id)a14 visibilityMetadata:(id)a15 defaultQueryIdentifier:(id)a16;
- (id)initWithIdentifier:(id)a0 transient:(BOOL)a1 mangledTypeName:(id)a2 mangledTypeNameByBundleIdentifier:(id)a3 effectiveBundleIdentifiers:(id)a4 displayRepresentation:(id)a5 properties:(id)a6 customIntentTypeClassName:(id)a7 availabilityAnnotations:(id)a8 systemProtocolMetadata:(id)a9;
- (id)initWithIdentifier:(id)a0 transient:(BOOL)a1 mangledTypeName:(id)a2 mangledTypeNameByBundleIdentifier:(id)a3 effectiveBundleIdentifiers:(id)a4 displayRepresentation:(id)a5 properties:(id)a6 customIntentTypeClassName:(id)a7 availabilityAnnotations:(id)a8 systemProtocolMetadata:(id)a9 attributionBundleIdentifier:(id)a10;
- (id)initWithIdentifier:(id)a0 transient:(BOOL)a1 mangledTypeName:(id)a2 mangledTypeNameByBundleIdentifier:(id)a3 effectiveBundleIdentifiers:(id)a4 displayTypeName:(id)a5 properties:(id)a6 customIntentTypeClassName:(id)a7;
- (id)initWithTypeName:(id)a0 displayTypeName:(id)a1 properties:(id)a2;
- (id)initWithTypeName:(id)a0 displayTypeName:(id)a1 properties:(id)a2 customIntentTypeClassName:(id)a3;
- (id)initWithTypeName:(id)a0 mangledTypeName:(id)a1 mangledTypeNameByBundleIdentifier:(id)a2 effectiveBundleIdentifiers:(id)a3 displayTypeName:(id)a4 properties:(id)a5 customIntentTypeClassName:(id)a6;
- (id)initWithTypeName:(id)a0 properties:(id)a1;
- (id)metadataByAddingEffectiveBundleIdentifiers:(id)a0 mangledTypeNameByBundleIdentifier:(id)a1;
- (BOOL)visibleForUse:(long long)a0;

@end
