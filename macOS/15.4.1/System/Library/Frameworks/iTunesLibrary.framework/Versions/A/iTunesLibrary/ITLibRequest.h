@class NSArray, ITLibModelKind;

@interface ITLibRequest : NSObject {
    unsigned long long _ampMediaKinds;
}

@property (retain, nonatomic) ITLibModelKind *libModelKindItem;
@property (retain, nonatomic) ITLibModelKind *libModelKindSection;
@property (copy, nonatomic) NSArray *allowedItemIdentifierSets;
@property (copy, nonatomic) NSArray *allowedSectionIdentifierSets;
@property (copy, nonatomic) NSArray *scopedContainers;
@property (copy, nonatomic) NSArray *itemSortDescriptors;
@property (copy, nonatomic) NSArray *sectionSortDescriptors;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } contentRange;
@property (nonatomic) unsigned long long filteringOptions;
@property (nonatomic) BOOL needsTitledSections;
@property (copy, nonatomic) NSArray *itemPropertyFilters;
@property (copy, nonatomic) NSArray *sectionPropertyFilters;
@property (readonly, nonatomic) unsigned long long mediaKinds;
@property (copy, nonatomic) NSArray *allowedItemIdentifiers;
@property (copy, nonatomic) NSArray *allowedSectionIdentifiers;

- (id)init;
- (void).cxx_destruct;
- (id)_ampLibIdentifierSetFromITLibIdentifierSet:(id)a0 modelKind:(id)a1;
- (id)_ampLibModelKindWithRequestModelKind:(id)a0;
- (id)_ampPropertyFiltersFromITPropertyFilters:(id)a0;
- (unsigned long long)_filteringOptions;
- (id)_identifierSetsFromStringIdentifiers:(id)a0 modelKind:(id)a1;
- (id)_identifiersFromITLibIdentfiers:(id)a0 modelKind:(id)a1;
- (void)_setMediaKindsForSongVariants:(unsigned long long)a0;
- (id)_setupScopedContainers;
- (id)setupAMPLibRequest;

@end
