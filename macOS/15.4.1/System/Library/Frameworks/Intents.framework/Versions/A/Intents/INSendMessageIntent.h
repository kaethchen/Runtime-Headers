@class NSString, NSArray, INPerson, INSpeakableString, NSNumber;

@interface INSendMessageIntent : INIntent <UNNotificationContentProviding, INSendMessageIntentExport>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSArray *recipients;
@property (readonly) long long outgoingMessageType;
@property (readonly, copy) NSString *content;
@property (readonly, copy) INSpeakableString *speakableGroupName;
@property (readonly, copy) NSString *conversationIdentifier;
@property (readonly, copy) NSString *serviceName;
@property (readonly, copy) INPerson *sender;
@property (readonly, copy) NSArray *attachments;
@property long long effect;
@property (copy) NSString *notificationThreadIdentifier;
@property (copy) NSString *alternativeConversationIdentifier;
@property (copy) NSNumber *shouldHideSiriAttribution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)_ignoredParameters;

- (id)domain;
- (void)setAttachments:(id)a0;
- (void)setContent:(id)a0;
- (void)setDomain:(id)a0;
- (void)setServiceName:(id)a0;
- (id)groupName;
- (void)setGroupName:(id)a0;
- (void)setRecipients:(id)a0;
- (void)setSender:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setVerb:(id)a0;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)_currentParameterCombination;
- (void)_intents_resolveOutgoingMessageTypeWithCompletionHandler:(id /* block */)a0;
- (BOOL)_isValidSubProducer:(id)a0;
- (id)_keyCodableAttributes;
- (id)_metadata;
- (long long)_preferredInteractionDirection;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_redactedDictionaryRepresentation;
- (void)_setMetadata:(id)a0;
- (id)_spotlightContentType;
- (id)_typedBackingStore;
- (id)_validParameterCombinationsWithSchema:(id)a0;
- (BOOL)configureAttributeSet:(id)a0 includingData:(BOOL)a1;
- (id)initWithRecipients:(id)a0 content:(id)a1 groupName:(id)a2 serviceName:(id)a3 sender:(id)a4;
- (id)initWithRecipients:(id)a0 content:(id)a1 serviceName:(id)a2 sender:(id)a3;
- (id)initWithRecipients:(id)a0 content:(id)a1 speakableGroupName:(id)a2 conversationIdentifier:(id)a3 serviceName:(id)a4 sender:(id)a5;
- (id)initWithRecipients:(id)a0 outgoingMessageType:(long long)a1 content:(id)a2 speakableGroupName:(id)a3 conversationIdentifier:(id)a4 serviceName:(id)a5 sender:(id)a6;
- (id)initWithRecipients:(id)a0 outgoingMessageType:(long long)a1 content:(id)a2 speakableGroupName:(id)a3 conversationIdentifier:(id)a4 serviceName:(id)a5 sender:(id)a6 attachments:(id)a7;
- (id)parametersByName;
- (void)setConversationIdentifier:(id)a0;
- (void)setOutgoingMessageType:(long long)a0;
- (void)setParametersByName:(id)a0;
- (void)setSpeakableGroupName:(id)a0;

@end
