@class MPModelLibraryRequest, ITLibrary;

@interface MPModeliTunesLibraryRequestOperation : MPAsyncOperation

@property (copy, nonatomic) MPModelLibraryRequest *request;
@property (retain, nonatomic) ITLibrary *itLibrary;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void).cxx_destruct;
- (void)execute;
- (id)_itLibKindWithRequestModelKind:(id)a0;
- (id)_additionalPropertyFilterForFilterText:(id)a0;
- (id)_allowedIdentifiersForITLibRequestFromRequestIdentifiers:(id)a0 modelKind:(id)a1;
- (id)_itLibIdentifierSetFromMPIdentifierSet:(id)a0 modelKind:(id)a1;
- (unsigned long long)_itLibRequestFilteringOptions;
- (id)_itemPropertyFilters;
- (id)_propertyFiltersForITLibRequestFromLibraryRequestPropertyFilters:(id)a0;
- (id)_sectionPropertyFilters;
- (void)_setScopedContainersForITLibRequest:(id)a0;
- (id)_sortDescriptorsForITLibRequestFromSortDescriptors:(id)a0;
- (id)_sortDescriptorsForTitledSectionRequestForModelKind:(id)a0;

@end
