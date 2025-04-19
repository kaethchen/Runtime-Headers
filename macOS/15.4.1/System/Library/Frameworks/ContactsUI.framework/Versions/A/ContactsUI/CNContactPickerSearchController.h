@class NSString, NSTimer, CNContactListController, ABPersonListSearchController;

@interface CNContactPickerSearchController : NSObject <ABPersonSearchControllerDelegate> {
    ABPersonListSearchController *_searchController;
    CNContactListController *_contactListController;
}

@property (retain) NSTimer *deferProgressTimer;
@property (readonly) unsigned long long countOfLocalSearchesPerformed;
@property (readonly) unsigned long long countOfServerSearchesPerformed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)startProgressAnimation;
- (void)stopProgressAnimation;
- (void)doProgressAnimation;
- (id)initWithSearchController:(id)a0 contactListController:(id)a1;
- (void)resetCountsOfSearchesPerformed;
- (void)searchControllerDidBeginSearching:(id)a0;
- (void)searchControllerDidCancelSearching:(id)a0;
- (void)searchControllerDidFinishSearching:(id)a0;
- (void)searchControllerDidUpdateSearch:(id)a0;
- (void)searchControllerWillBeginSearching:(id)a0;
- (void)searchResultsChanged;

@end
