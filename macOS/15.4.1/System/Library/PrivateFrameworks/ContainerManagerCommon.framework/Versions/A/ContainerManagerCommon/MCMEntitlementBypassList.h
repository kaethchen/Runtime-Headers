@class NSDictionary;

@interface MCMEntitlementBypassList : NSObject {
    NSDictionary *_bypassListedLookupByCodeSignIdentifier;
}

@property (retain, nonatomic) NSDictionary *systemEntitlementBypassList;
@property (retain, nonatomic) NSDictionary *systemGroupEntitlementBypassList;

+ (id)sharedBypassList;

- (void).cxx_destruct;
- (id)wellKnownContainerIdentifiersForSandboxPushDownCompatibilitySet;
- (id)_convertArraysToSetsInNestedDictionary:(id)a0;
- (BOOL)containerIdIsWellknown:(id)a0 class:(unsigned long long)a1;
- (id)initWithSystemContainerMapping:(id)a0 systemGroupContainerMapping:(id)a1 bypassListedCodeSignIdentifierMapping:(id)a2;
- (BOOL)isLookupAllowedToBypassEntitlementFromCodeSignIdentifier:(id)a0 forContainerClass:(unsigned long long)a1 containerIdentifier:(id)a2;
- (BOOL)systemContainerIdIsWellknown:(id)a0;
- (BOOL)systemGroupContainerIdIsWellknown:(id)a0;
- (id)wellknownContainerForId:(id)a0 class:(unsigned long long)a1;
- (id)wellknownSystemContainerForId:(id)a0;
- (id)wellknownSystemContainers;
- (id)wellknownSystemGroupContainerForId:(id)a0;
- (id)wellknownSystemGroupContainers;

@end
