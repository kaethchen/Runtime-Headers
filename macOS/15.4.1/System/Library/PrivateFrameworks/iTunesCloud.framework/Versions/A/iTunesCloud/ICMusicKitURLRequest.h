@class ICStoreURLRequest, NSString, ICMusicKitRequestContext, NSDictionary;

@interface ICMusicKitURLRequest : ICURLRequest {
    ICStoreURLRequest *_pendingEquivalentStoreURLRequest;
    NSString *_cachedDescription;
}

@property (readonly, copy, nonatomic) NSString *_developerToken;
@property (readonly, nonatomic) ICStoreURLRequest *_pendingEquivalentStoreURLRequest;
@property (readonly, copy, nonatomic) ICMusicKitRequestContext *requestContext;
@property (copy, nonatomic) NSDictionary *additionalHTTPCookies;

+ (unsigned long long)_defaultMaxRetryCountForReason:(id)a0;
+ (Class)_responseClass;
+ (Class)_responseHandlerClass;

- (id)description;
- (void).cxx_destruct;
- (id)_description;
- (void)buildURLRequestWithCompletionHandler:(id /* block */)a0;
- (id)initWithURL:(id)a0 requestContext:(id)a1;
- (id)initWithURLRequest:(id)a0 requestContext:(id)a1;
- (void)_updateURLSessionManagedPropertiesForEquivalentStoreURLRequest:(id)a0;
- (void)_buildEquivalentStoreURLRequestWithDeveloperToken:(id)a0 completionHandler:(id /* block */)a1;
- (void)_buildMusicKitURLRequestWithBaseURLRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)_buildStoreURLRequestWithUpdatedDomains:(id)a0 completionHandler:(id /* block */)a1;
- (id)_buildStoreURLRequestWithUpdatedDomains:(id)a0 withBag:(id)a1;
- (void)_buildUserTokenBasedMusicKitURLRequestWithBaseURLRequest:(id)a0 developerToken:(id)a1 completionHandler:(id /* block */)a2;
- (void)_setDeveloperToken:(id)a0;
- (id)initWithURLRequest:(id)a0 requestContext:(id)a1 resumeData:(id)a2;

@end
