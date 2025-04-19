@class NSSet, NSString, NSDictionary, NSOrderedSet;

@interface BSServicesConfiguration : NSObject <BSDescriptionProviding> {
    NSDictionary *_domainsByIdentifier;
    NSDictionary *_disabledDomainsByIdentifier;
    NSOrderedSet *_orderedDomains;
}

@property (readonly, copy, nonatomic) NSSet *domains;
@property (readonly, copy, nonatomic) NSSet *disabledDomains;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultConfiguration;
+ (id)bootstrapConfiguration;
+ (id)activateManualDomain:(id)a0;
+ (void)activateViewServiceConfiguration;
+ (void)activateXPCService;
+ (id)extendAutomaticBootstrapCompletion;
+ (id)registerDynamicDomainsFromPlist:(id)a0;
+ (void)registerViewServiceConfiguration;
+ (id)viewServiceConfiguration;

- (id)init;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)domainForMachName:(id)a0;
- (id)domainsContainingServiceIdentifier:(id)a0;
- (id)domainForIdentifier:(id)a0;

@end
