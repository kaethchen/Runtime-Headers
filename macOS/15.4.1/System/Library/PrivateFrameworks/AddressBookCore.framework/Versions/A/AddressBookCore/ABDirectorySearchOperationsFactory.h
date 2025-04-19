@class NSString, ABAccount;

@interface ABDirectorySearchOperationsFactory : NSObject <ABSearchOperationsFactory> {
    ABAccount *_account;
    Class _searchOperationClass;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithAccount:(id)a0 searchOperationClass:(Class)a1;
- (id)searchOperationsForString:(id)a0 addressBook:(id)a1 delegate:(id)a2;

@end
