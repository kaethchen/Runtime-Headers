@interface RemindersIntentsFramework.TTRSearchForNotebookItemsIntentHandler : NSObject <INSearchForNotebookItemsIntentHandling> {
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ timeProvider;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleSearchForNotebookItems:(id)a0 completion:(id /* block */)a1;
- (void)resolveItemTypeForSearchForNotebookItems:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveLocationForSearchForNotebookItems:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveLocationSearchTypeForSearchForNotebookItems:(id)a0 withCompletion:(id /* block */)a1;

@end
