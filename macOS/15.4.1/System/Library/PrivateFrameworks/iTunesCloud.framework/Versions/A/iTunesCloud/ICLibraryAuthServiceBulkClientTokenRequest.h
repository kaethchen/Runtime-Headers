@class ICStoreRequestContext, ICLibraryAuthServiceBulkClientTokenResponse, NSSet;

@interface ICLibraryAuthServiceBulkClientTokenRequest : ICRequestOperation {
    ICStoreRequestContext *_storeRequestContext;
    ICLibraryAuthServiceBulkClientTokenResponse *_response;
    NSSet *_accountDSIDs;
}

- (void).cxx_destruct;
- (void)execute;
- (void)performRequestWithResponseHandler:(id /* block */)a0;
- (id)initWithStoreRequestContext:(id)a0 accountDSIDs:(id)a1;

@end
