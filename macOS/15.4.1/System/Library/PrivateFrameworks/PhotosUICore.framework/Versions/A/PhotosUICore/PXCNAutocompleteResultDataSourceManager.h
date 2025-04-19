@class NSString, NSArray, NSDictionary, PXSharedLibraryParticipantValidationManager, CNAutocompleteStore, NSObject, NSMutableArray, PXCNAutocompleteResultDataSource;
@protocol OS_dispatch_queue, CNCancelable;

@interface PXCNAutocompleteResultDataSourceManager : PXRecipientSearchDataSourceManager <CNAutocompleteFetchDelegate> {
    NSObject<OS_dispatch_queue> *_creationQueue;
    CNAutocompleteStore *_autocompleteStore;
    id<CNCancelable> _currentSearch;
    BOOL _shouldUnifyResults;
    NSMutableArray *_autocompleteResults;
    NSMutableArray *_concreteResults;
    NSObject<OS_dispatch_queue> *_searchResultsQueue;
    NSDictionary *_searchResultsByDestination;
    PXSharedLibraryParticipantValidationManager *_cloudKitShareQueryController;
}

@property (retain, nonatomic) NSArray *unifiedResults;
@property (readonly, nonatomic) PXCNAutocompleteResultDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)autocompleteFetch:(id)a0 didFailWithError:(id)a1;
- (void)autocompleteFetch:(id)a0 didReceiveResults:(id)a1;
- (id)_createConcreteResultsFromUnifiedResults:(id)a0;
- (void)_creationQueue_creatingRecipientSearchResultsForResults:(id)a0 forFetch:(id)a1;
- (void)_discloseResultAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 secondaryRecipients:(id)a1;
- (void)_handleAddressValidationResults:(id)a0 error:(id)a1;
- (void)_main_finishedCreatingUnifiedResults:(id)a0 forFetch:(id)a1;
- (unsigned long long)_offsetWithCurrentDisclosedIndexesForIndex:(unsigned long long)a0;
- (void)_undiscloseResultAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 secondaryRecipientsCount:(unsigned long long)a1;
- (void)queryStringDidChange;
- (void)toggleDisclosureForResultAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;

@end
