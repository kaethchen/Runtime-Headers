@class NSArray, NSSet, NSString, NSError, NSMutableArray, NSAttributedString;

@interface _NSMenuContext : NSObject {
    id _requestor;
    NSArray *_sendTypes;
    NSMutableArray *_requestorInfos;
    NSArray *_fileURLsToCheck;
    NSSet *_preloadedUTIsOfFileURLsToCheck;
    NSError *_errorLoadingUTIs;
    NSString *_stringToCheck;
    struct _NSRange { unsigned long long location; unsigned long long length; } _rangeOfStringToCheck;
    NSAttributedString *_attrStringToCheck;
    struct _NSRange { unsigned long long location; unsigned long long length; } _rangeOfAttrStringToCheck;
    NSArray *_carbonCopyUTIs;
    NSArray *_carbonPasteUTIs;
    NSString *_presentationMode;
    unsigned long long _source;
    struct { unsigned char requiresSelection : 1; unsigned char inspectsSelectionText : 1; unsigned char allowsAllWhitespaceText : 1; unsigned char checkedForString : 1; unsigned char checkedForAttrString : 1; unsigned char checkedForURLs : 1; unsigned char checkedForWhitespace : 1; unsigned char isAllWhitespace : 1; unsigned int reserved : 24; } _flags;
}

@property (nonatomic) unsigned long long duplicateServicesMask;
@property (nonatomic) BOOL allowsAllWhitespaceText;
@property (nonatomic) BOOL inspectsSelectionText;
@property (nonatomic) BOOL requiresSelection;

- (void)dealloc;
- (id)_selectedURLsForApplyingFilters;
- (BOOL)_concurrentPortionOfQualifyEntriesWithEntriesNeedingURLTypechecking:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_preconcurrentPortionOfQualifyEntries:(id)a0 returningEntriesNeedingURLTypecheckingIntoSet:(id)a1;
- (id)_selectedStringAndRangeForApplyingFilters:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 attributed:(BOOL)a1;
- (BOOL)_selectionExistsAndIsAllWhitespace;
- (BOOL)_sendTypesContainsTextTypeAppropriateForFiltering;
- (BOOL)_stringContainsFilePath:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)determineSelectedStringForApplyingFiltersDirectlyFromRequestorSupplyingType:(id)a0 attributed:(BOOL)a1;
- (BOOL)determineSelectedStringForApplyingFiltersViaPasteboardFromRequestorSupplyingType:(id)a0 attributed:(BOOL)a1;
- (void)filterEntriesByAvailableInputSources:(id)a0;
- (void)filterEntriesByBundleID:(id)a0;
- (void)filterEntriesByCharacterLimit:(id)a0;
- (void)filterEntriesByDataDetectors:(id)a0;
- (void)filterEntriesByDuplicates:(id)a0;
- (void)filterEntriesByFilePath:(id)a0;
- (void)filterEntriesByLanguage:(id)a0;
- (void)filterEntriesByLinkDetection:(id)a0;
- (void)filterEntriesByMenuLocation:(id)a0;
- (void)filterEntriesByRadar:(id)a0;
- (void)filterEntriesByRemovingAlternativeEntriesWithSelectionRequiringOriginals:(id)a0;
- (void)filterEntriesByRemovingItemsThatDoNotUseSelection:(id)a0;
- (void)filterEntriesByRemovingItemsThatUseSelectionIfItIsWhitespace:(id)a0;
- (void)filterEntriesByRemovingItemsWithNoSendOrReceiveTypes:(id)a0;
- (void)filterEntriesByScript:(id)a0;
- (void)filterEntriesByTextTransformations:(id)a0;
- (void)filterEntriesByTheirFilters:(id)a0;
- (void)filterEntriesByUnmatchedFileTypes:(id)a0 entriesNeedingURLTypechecking:(id)a1;
- (void)filterEntriesByWidthForm:(id)a0;
- (void)filterEntriesByWordLimit:(id)a0;
- (void)filterEntriesWithCarbonPasteboardTypesBySupportedSendAndReceiveTypes:(id)a0 returningSendTypesIntoArray:(id)a1;
- (void)filterEntriesWithRequestorBySupportedSendAndReceiveTypes:(id)a0 returningSendTypesIntoArray:(id)a1 returningEntriesNeedingURLTypecheckingIntoSet:(id)a2;
- (id)getObjectsOfClass:(Class)a0 fromRequestorProvidingType:(id)a1 options:(id)a2;
- (id)infoForRequestor:(id)a0;
- (id)initForCarbonServicesMenuWithCopyUTIs:(id)a0 pasteUTIs:(id)a1;
- (id)initForServicePresentationMode:(id)a0 withRequestorChain:(id)a1;
- (void)moveQualifiedEntries:(id)a0 approvedEntries:(id)a1 havingRunFilters:(unsigned long long)a2;
- (BOOL)qualifyEntries:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)reportNoTextForTrackingFiltersThatRequireText:(id)a0;
- (id)requestorProvidingType:(id)a0;
- (BOOL)serviceEntryIsActiveInThisContext:(id)a0;
- (BOOL)serviceEntryTypesConformToCarbonPasteboardTypes:(id)a0;
- (id)utisForURLs:(id)a0 error:(id *)a1;

@end
