@class NSString, NSArray, CLPlacemark, INDateComponentsRange;

@interface INStartPhotoPlaybackIntent : INIntent <INStartPhotoPlaybackIntentExport>

@property (readonly, copy) INDateComponentsRange *dateCreated;
@property (readonly, copy) CLPlacemark *locationCreated;
@property (readonly, copy) NSString *albumName;
@property (readonly, copy) NSArray *searchTerms;
@property (readonly) long long searchTermsOperator;
@property (readonly) unsigned long long includedAttributes;
@property (readonly) unsigned long long excludedAttributes;
@property (readonly, copy) NSArray *peopleInPhoto;
@property (readonly) long long peopleInPhotoOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setDomain:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setDateCreated:(id)a0;
- (void)setVerb:(id)a0;
- (void)setSearchTerms:(id)a0;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithDateCreated:(id)a0 locationCreated:(id)a1 albumName:(id)a2 searchTerms:(id)a3 includedAttributes:(unsigned long long)a4 excludedAttributes:(unsigned long long)a5 peopleInPhoto:(id)a6;
- (id)parametersByName;
- (void)setAlbumName:(id)a0;
- (void)setExcludedAttributes:(unsigned long long)a0;
- (void)setIncludedAttributes:(unsigned long long)a0;
- (void)setLocationCreated:(id)a0;
- (void)setParametersByName:(id)a0;
- (void)setPeopleInPhoto:(id)a0;

@end
