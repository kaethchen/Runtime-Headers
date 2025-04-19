@interface RemindersIntentsFramework.ConfigurationIntentHandler : NSObject <ConfigurationIntentHandling> {
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ badgeSize;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleConfiguration:(id)a0 completion:(id /* block */)a1;
- (id)defaultListForConfiguration:(id)a0;
- (void)provideListOptionsCollectionForConfiguration:(id)a0 searchTerm:(id)a1 withCompletion:(id /* block */)a2;
- (void)provideListOptionsForConfiguration:(id)a0 searchTerm:(id)a1 withCompletion:(id /* block */)a2;

@end
