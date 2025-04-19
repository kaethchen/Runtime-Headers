@class NSString, NSArray, CNAutocompleteFetchRequest, CNAutocompleteResultTracing, NSOperationQueue, ABAddressBook, NSPredicate, NSMutableArray;
@protocol CNScheduler;

@interface ABAutocompleteServerSearchObservable : CNObservable <ABAutocompleteSearchObservable> {
    CNAutocompleteFetchRequest *_fetchRequest;
    id<CNScheduler> _scheduler;
    NSArray *_accounts;
    NSOperationQueue *_queue;
    ABAddressBook *_addressBook;
    id /* block */ _resultTransform;
    NSMutableArray *_results;
    NSPredicate *_postFilterPredicate;
}

@property (retain) CNAutocompleteResultTracing *tracer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)autocompleteAccountsForRepository:(id)a0;
+ (id)observableWithFetchRequest:(id)a0 scheduler:(id)a1;

- (void).cxx_destruct;
- (id)subscribe:(id)a0;
- (id)addressBook;
- (void)searchOperation:(id)a0 foundRecords:(id)a1;
- (void)executeRequest:(id)a0 resultHandler:(id /* block */)a1 completionHandler:(id /* block */)a2 errorHandler:(id /* block */)a3;
- (id)initWithFetchRequest:(id)a0 scheduler:(id)a1 accounts:(id)a2;
- (id)makePostFilterPredicateForRequest:(id)a0;
- (id /* block */)makeResultTransformForRequest:(id)a0;
- (id)searchOperationsForRequest:(id)a0;

@end
