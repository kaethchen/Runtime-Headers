@class NSArray, NSString;

@interface MusicKit_SoftLinking_MPModelLibraryRequest : MusicKit_SoftLinking_MPModelRequest

@property (copy, nonatomic) NSArray *allowedItemIdentifiers;
@property (copy, nonatomic) NSArray *allowedSectionIdentifiers;
@property (copy, nonatomic) NSArray *scopedContainers;
@property (copy, nonatomic) NSArray *itemSortDescriptors;
@property (copy, nonatomic) NSArray *sectionSortDescriptors;
@property (copy, nonatomic) NSString *itemFilterText;
@property (copy, nonatomic) NSString *sectionFilterText;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) BOOL wantsDetailedKeepLocalRequestableResponse;
@property (nonatomic) id underlyingRequest;

- (void).cxx_destruct;
- (void)performWithCompletionHandler:(id /* block */)a0;
- (id)initWithLegacyModelObject:(id)a0 itemType:(long long)a1 properties:(id)a2 relationships:(id)a3;
- (id)initWithLegacyModelObjectType:(long long)a0 itemKind:(id)a1 allowedItemIdentifiers:(id)a2 allowedItemIdentifierSets:(id)a3 itemSortDescriptors:(id)a4 itemFilterText:(id)a5 itemPropertyFilters:(id)a6 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a7 filteringOptions:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; })a8 mediaLibrary:(id)a9;
- (id)initWithLegacyModelObjectType:(long long)a0 sectionLegacyModelObjectType:(long long)a1 itemKind:(id)a2 sectionKind:(id)a3 allowedItemIdentifiers:(id)a4 allowedSectionIdentifiers:(id)a5 allowedItemIdentifierSets:(id)a6 allowedSectionIdentifierSets:(id)a7 scopedContainers:(id)a8 itemSortDescriptors:(id)a9 sectionSortDescriptors:(id)a10 itemFilterText:(id)a11 sectionFilterText:(id)a12 itemPropertyFilters:(id)a13 sectionPropertyFilters:(id)a14 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a15 filteringOptions:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; })a16 mediaLibrary:(id)a17;

@end
