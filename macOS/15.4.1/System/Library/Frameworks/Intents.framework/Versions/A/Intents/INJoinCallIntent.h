@class NSString, INCallGroupConversationFilter, INCallGroupConversation;

@interface INJoinCallIntent : INIntent <INJoinCallIntentExport>

@property (readonly, copy) INCallGroupConversationFilter *groupConversationFilter;
@property (readonly, copy) INCallGroupConversation *groupConversation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setDomain:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setVerb:(id)a0;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithGroupConversationFilter:(id)a0 groupConversation:(id)a1;
- (id)parametersByName;
- (void)setGroupConversation:(id)a0;
- (void)setGroupConversationFilter:(id)a0;
- (void)setParametersByName:(id)a0;

@end
