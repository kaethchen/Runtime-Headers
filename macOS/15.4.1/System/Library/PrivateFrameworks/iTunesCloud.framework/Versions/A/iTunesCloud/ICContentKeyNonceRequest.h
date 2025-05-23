@class ICContentKeyNonceResponse, NSURL, ICStoreRequestContext, NSNumber;

@interface ICContentKeyNonceRequest : ICRequestOperation {
    ICStoreRequestContext *_storeRequestContext;
    NSNumber *_adamID;
    NSNumber *_accountDSID;
    NSURL *_keyServerURL;
    ICContentKeyNonceResponse *_response;
}

- (void).cxx_destruct;
- (void)execute;
- (void)performWithResponseHandler:(id /* block */)a0;
- (id)initWithStoreRequestContext:(id)a0 adamID:(id)a1 accountDSID:(id)a2 keyServerURL:(id)a3;

@end
