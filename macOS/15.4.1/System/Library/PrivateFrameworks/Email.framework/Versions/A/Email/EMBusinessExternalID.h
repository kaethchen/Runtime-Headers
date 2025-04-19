@class NSString, _EMBusinessExternalIDComponents;

@interface EMBusinessExternalID : NSObject <NSCopying, EFPubliclyDescribable> {
    struct EFAtomicObject { _Atomic long long cfObject; } _serializedRepresentation;
}

@property (readonly, nonatomic) _EMBusinessExternalIDComponents *components;
@property (readonly, nonatomic) long long grouping;
@property (readonly, copy, nonatomic) NSString *highLevelDomain;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *simpleAddress;
@property (readonly, copy, nonatomic) NSString *brandID;
@property (readonly, copy, nonatomic) NSString *serializedRepresentation;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)externalIDForBrandID:(id)a0;
+ (id)externalIDForHighLevelDomain:(id)a0;
+ (id)externalIDForHighLevelDomain:(id)a0 displayName:(id)a1;
+ (id)externalIDForHighLevelDomain:(id)a0 displayNameCommonPrefix:(id)a1;
+ (id)externalIDForSerializedRepresentation:(id)a0;
+ (id)externalIDForSimpleAddress:(id)a0;
+ (id)_componentsForSimpleAddressURL:(id)a0;
+ (id)_componentsForBrandIDURL:(id)a0;
+ (id)_componentsForHighLevelDomainDisplayNameURL:(id)a0;
+ (id)_componentsForHighLevelDomainURL:(id)a0;
+ (id)_groupingForSerializedRepresentation:(id)a0 components:(id *)a1;
+ (id)_queryItemValueForName:(id)a0 fromURLComponents:(id)a1;
+ (id)_serializedRepresentationForGrouping:(long long)a0 components:(id)a1;
+ (id)_serializedRepresentationUsingBrandID:(id)a0;
+ (id)_serializedRepresentationUsingHighLevelDomain:(id)a0;
+ (id)_serializedRepresentationUsingScheme:(id)a0 highLevelDomain:(id)a1 andDisplayName:(id)a2;
+ (id)_serializedRepresentationUsingSimpleAddress:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_loggingDescriptionForSerializedRepresentation:(id)a0;
- (id)_redactComponent:(id)a0;
- (id)initWithGrouping:(long long)a0 components:(id)a1 serializedRepresentation:(id)a2;

@end
