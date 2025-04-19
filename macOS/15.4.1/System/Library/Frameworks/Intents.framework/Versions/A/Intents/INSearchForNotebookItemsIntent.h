@class NSString, CLPlacemark, INSpeakableString, INDateComponentsRange;

@interface INSearchForNotebookItemsIntent : INIntent <INSearchForNotebookItemsIntentExport>

@property (readonly, copy) INSpeakableString *title;
@property (readonly, copy) NSString *content;
@property (readonly) long long itemType;
@property (readonly) long long status;
@property (readonly, copy) CLPlacemark *location;
@property (readonly) long long locationSearchType;
@property (readonly, copy) INDateComponentsRange *dateTime;
@property (readonly) long long dateSearchType;
@property (readonly) unsigned long long temporalEventTriggerTypes;
@property (readonly) long long taskPriority;
@property (readonly, copy) NSString *notebookItemIdentifier;
@property (copy) INSpeakableString *groupName;
@property BOOL includeAllNoteContents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setTitle:(id)a0;
- (void)setContent:(id)a0;
- (void)setDomain:(id)a0;
- (void)setLocation:(id)a0;
- (void)setItemType:(long long)a0;
- (id)verb;
- (void)setStatus:(long long)a0;
- (id)_dictionaryRepresentation;
- (void)setVerb:(id)a0;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithTitle:(id)a0 content:(id)a1 itemType:(long long)a2 status:(long long)a3 location:(id)a4 locationSearchType:(long long)a5 dateTime:(id)a6 dateSearchType:(long long)a7;
- (id)initWithTitle:(id)a0 content:(id)a1 itemType:(long long)a2 status:(long long)a3 location:(id)a4 locationSearchType:(long long)a5 dateTime:(id)a6 dateSearchType:(long long)a7 notebookItemIdentifier:(id)a8;
- (id)initWithTitle:(id)a0 content:(id)a1 itemType:(long long)a2 status:(long long)a3 location:(id)a4 locationSearchType:(long long)a5 dateTime:(id)a6 dateSearchType:(long long)a7 temporalEventTriggerTypes:(unsigned long long)a8 taskPriority:(long long)a9 notebookItemIdentifier:(id)a10;
- (id)parametersByName;
- (void)setDateSearchType:(long long)a0;
- (void)setDateTime:(id)a0;
- (void)setLocationSearchType:(long long)a0;
- (void)setNotebookItemIdentifier:(id)a0;
- (void)setParametersByName:(id)a0;
- (void)setTaskPriority:(long long)a0;
- (void)setTemporalEventTriggerTypes:(unsigned long long)a0;

@end
