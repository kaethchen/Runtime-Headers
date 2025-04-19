@class ICStoreRequestContext;

@interface ICUserAuthenticationValidationRequest : NSObject {
    ICStoreRequestContext *_requestContext;
}

- (void).cxx_destruct;
- (id)initWithUserIdentity:(id)a0;
- (void)performWithCompletion:(id /* block */)a0;
- (id)initWithRequestContext:(id)a0;

@end
