@class INSpeakableString, INNoteContent, NSString;

@interface INCreateNoteIntent : INIntent <INCreateNoteIntentExport>

@property (readonly, copy) INSpeakableString *title;
@property (readonly, copy) INNoteContent *content;
@property (readonly, copy) INSpeakableString *groupName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setTitle:(id)a0;
- (void)setContent:(id)a0;
- (void)setDomain:(id)a0;
- (void)setGroupName:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setVerb:(id)a0;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_redactedDictionaryRepresentation;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithTitle:(id)a0 content:(id)a1 groupName:(id)a2;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;

@end
