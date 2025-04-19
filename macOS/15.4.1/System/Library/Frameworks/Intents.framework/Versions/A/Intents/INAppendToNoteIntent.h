@class NSString, INNote, INNoteContent;

@interface INAppendToNoteIntent : INIntent <INAppendToNoteIntentExport>

@property (readonly, copy) INNote *targetNote;
@property (readonly, copy) INNoteContent *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setContent:(id)a0;
- (void)setDomain:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setVerb:(id)a0;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithTargetNote:(id)a0 content:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setTargetNote:(id)a0;

@end
