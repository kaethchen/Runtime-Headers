@class NSArray, NSString, INDateComponentsRange;

@interface INSearchForMessagesIntent : INIntent <INSearchForMessagesIntentExport>

@property (readonly, copy) NSArray *recipients;
@property (readonly) long long recipientsOperator;
@property (readonly, copy) NSArray *senders;
@property (readonly) long long sendersOperator;
@property (readonly, copy) NSArray *searchTerms;
@property (readonly) long long searchTermsOperator;
@property (readonly) unsigned long long attributes;
@property (readonly, copy) INDateComponentsRange *dateTimeRange;
@property (readonly, copy) NSArray *identifiers;
@property (readonly) long long identifiersOperator;
@property (readonly, copy) NSArray *notificationIdentifiers;
@property (readonly) long long notificationIdentifiersOperator;
@property (readonly, copy) NSArray *speakableGroupNames;
@property (readonly) long long speakableGroupNamesOperator;
@property (readonly, copy) NSArray *conversationIdentifiers;
@property (readonly) long long conversationIdentifiersOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setAttributes:(unsigned long long)a0;
- (id)contents;
- (void)setDomain:(id)a0;
- (void)setContents:(id)a0;
- (void)setRecipients:(id)a0;
- (id)attributeSet;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setIdentifiers:(id)a0;
- (void)setSenders:(id)a0;
- (void)setVerb:(id)a0;
- (void)setSearchTerms:(id)a0;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)contentPredicate;
- (long long)contentsOperator;
- (id)groupNames;
- (long long)groupNamesOperator;
- (id)initWithRecipients:(id)a0 senders:(id)a1 contents:(id)a2 attributes:(unsigned long long)a3 dateTimeRange:(id)a4 identifiers:(id)a5;
- (id)initWithRecipients:(id)a0 senders:(id)a1 contents:(id)a2 attributes:(unsigned long long)a3 dateTimeRange:(id)a4 identifiers:(id)a5 notificationIdentifiers:(id)a6;
- (id)initWithRecipients:(id)a0 senders:(id)a1 searchTerms:(id)a2 attributes:(unsigned long long)a3 dateTimeRange:(id)a4 identifiers:(id)a5 notificationIdentifiers:(id)a6 groupNames:(id)a7;
- (id)initWithRecipients:(id)a0 senders:(id)a1 searchTerms:(id)a2 attributes:(unsigned long long)a3 dateTimeRange:(id)a4 identifiers:(id)a5 notificationIdentifiers:(id)a6 speakableGroupNames:(id)a7;
- (id)initWithRecipients:(id)a0 senders:(id)a1 searchTerms:(id)a2 attributes:(unsigned long long)a3 dateTimeRange:(id)a4 identifiers:(id)a5 notificationIdentifiers:(id)a6 speakableGroupNames:(id)a7 conversationIdentifiers:(id)a8;
- (id)parametersByName;
- (void)setConversationIdentifiers:(id)a0;
- (void)setDateTimeRange:(id)a0;
- (void)setGroupNames:(id)a0;
- (void)setNotificationIdentifiers:(id)a0;
- (void)setParametersByName:(id)a0;
- (void)setSpeakableGroupNames:(id)a0;

@end
