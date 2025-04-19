@class ICStoreRequestContext, ICLightweightMusicSubscriptionStatusResponse;

@interface ICLightweightMusicSubscriptionStatusRequest : ICRequestOperation {
    ICLightweightMusicSubscriptionStatusResponse *_response;
}

@property (copy, nonatomic) ICStoreRequestContext *requestContext;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithRequestContext:(id)a0;
- (void)performRequestWithResponseHandler:(id /* block */)a0;
- (void)_finishWithExtendedSubscriptionStatusResponse:(id)a0 error:(id)a1;

@end
