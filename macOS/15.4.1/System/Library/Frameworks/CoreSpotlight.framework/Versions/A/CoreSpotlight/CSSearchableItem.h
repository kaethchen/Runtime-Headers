@class NSString, CSSearchableItemAttributeSet, NSDate;

@interface CSSearchableItem : NSObject <CSIndexQueuableItem, NSSecureCoding, NSCopying> {
    NSString *_filePath;
    int _device;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *filePath;
@property (readonly) int device;
@property BOOL noIndex;
@property BOOL isAppEntity;
@property (readonly) BOOL needsPriority;
@property (readonly) BOOL needsSummary;
@property unsigned __int128 score;
@property BOOL allowTextStore;
@property BOOL shouldSetSpotlightMailMessageAttributes;
@property unsigned long long machTime;
@property (copy) NSString *bundleID;
@property (copy) NSString *protection;
@property (readonly) BOOL isFile;
@property (readonly, nonatomic) struct __MDItem { } *mdItem;
@property (copy) NSString *uniqueIdentifier;
@property (copy) NSString *domainIdentifier;
@property (copy) NSDate *expirationDate;
@property (retain) CSSearchableItemAttributeSet *attributeSet;
@property BOOL isUpdate;
@property unsigned long long updateListenerOptions;

+ (id)searchableItemFromUserActivity:(id)a0 bundleID:(id)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setAttributes:(id)a0;
- (id)attributes;
- (long long)compareByRank:(id)a0;
- (struct __MDItem { } *)mdItem;
- (id)initWithUniqueIdentifier:(id)a0 domainIdentifier:(id)a1 attributeSet:(id)a2;
- (void)_fixBrokenAuthorNames:(id)a0;
- (BOOL)_hasAttributesOfType:(id)a0;
- (BOOL)_isFullyFormed;
- (void)_parseEmailHeadersForFeatures:(id)a0;
- (void)_populateMissingPeopleWithNames:(id)a0 emailAddresses:(id)a1 allItemPersons:(id)a2 primaryItemPersons:(id)a3 additionalItemPersons:(id)a4 hiddenAdditionalItemPersons:(id)a5 personDictionary:(id)a6 contactProperties:(id)a7 nameKey:(id)a8 emailKey:(id)a9 contactIdentifierKey:(id)a10 personKey:(id)a11 photosPersonIdentifierKey:(id)a12 personTypeKey:(id)a13 nameAlternativesKey:(id)a14 faceAttributesKey:(id)a15 attributeSet:(id)a16;
- (id)_propertiesDescription;
- (void)_standardizeDeprecatedProperties:(id)a0;
- (void)_standardizeDocumentUnderstandingCategories:(id)a0;
- (void)_standardizeDocumentUnderstandingTopics:(id)a0;
- (BOOL)_standardizeExternalAnalysisTags:(id)a0 forAttributeSet:(id)a1 primaryAttribute:(id)a2 analysisAttributes:(id)a3 specializedAttributes:(id)a4 standardizeBlock:(id /* block */)a5;
- (void)_standardizeExtractedEntities:(id)a0;
- (void)_standardizeExtractedNumericEntities:(id)a0;
- (void)_standardizeFileProvider:(id)a0;
- (void)_standardizeHTML:(id)a0;
- (void)_standardizeMarkAs:(id)a0;
- (BOOL)_standardizeNumericAnalysisTags:(id)a0 forAttributeSet:(id)a1 primaryAttribute:(id)a2 analysisAttributes:(id)a3 specializedAttributes:(id)a4 standardizeBlock:(id /* block */)a5;
- (void)_standardizePeople:(id)a0;
- (void)_standardizePortrait:(id)a0;
- (void)_standardizeSceneClassification:(id)a0;
- (void)_standardizeSiriShortcuts:(id)a0;
- (void)_updateWithSearchableItem:(id)a0;
- (BOOL)appendMDItem:(id)a0;
- (void)breakOutPersonInformationInSet:(id)a0 withName:(id)a1 emails:(id)a2 contactIdentifiers:(id)a3 photosPersonIdentifiers:(id)a4 personType:(id)a5 nameAlternatives:(id)a6 nameAlternativesCounts:(id)a7 faceAttributes:(id)a8 faceAttributesCounts:(id)a9 nameKey:(id)a10 emailKey:(id)a11 contactIdentifierKey:(id)a12 emailAddressKey:(id)a13 photosPersonIdentifierKey:(id)a14 personTypeKey:(id)a15 nameAlternativesKey:(id)a16 faceAttributesKey:(id)a17 attributeSet:(id)a18;
- (long long)compareByEmbeddingDistance:(id)a0;
- (id)copyReconstructedAdditionalRecipients;
- (id)copyReconstructedAuthors;
- (id)copyReconstructedHiddenAdditionalRecipients;
- (id)copyReconstructedPrimaryRecipients;
- (id)copyReconstructedRecipients;
- (void)extractAndStandardizePersonInformation:(id)a0 contactIdentifierKey:(id)a1 emailKey:(id)a2 nameKey:(id)a3 emailAddressExtractKey:(id)a4 photosPersonIdentifierKey:(id)a5 personTypeKey:(id)a6 nameAlternativesKey:(id)a7 faceAttributesKey:(id)a8 contactIdentifiers:(id)a9 emails:(id)a10 names:(id)a11 photosPersonIdentifiers:(id)a12 personType:(id)a13 nameAlternatives:(id)a14 nameAlternativesCounts:(id)a15 faceAttributes:(id)a16 faceAttributesCounts:(id)a17 persons:(id)a18;
- (id)filteredSpotlightAttributes;
- (id)initWithAttributeSet:(id)a0;
- (id)initWithMDItem:(struct __MDItem { } *)a0 attributes:(id)a1;
- (id)initWithMDItemURL:(id)a0 attributes:(id)a1;
- (void)markAsUsed;
- (id)searchableItem;
- (void)standardizeAttributesForBundle:(id)a0 protectionClass:(id)a1;

@end
