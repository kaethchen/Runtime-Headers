@class NSArray;
@protocol CoreDAVAccountInfoProvider;

@interface CoreDAVRequestLogger : NSObject {
    id<CoreDAVAccountInfoProvider> _provider;
    int _snippetsLogged;
}

@property (retain, nonatomic) NSArray *headerSortDescriptors;

+ (id)_redactedHeadersFromHeaders:(id)a0;

- (void).cxx_destruct;
- (id)initWithProvider:(id)a0;
- (id)_inflateRequestBody:(id)a0;
- (void)finishCoreDAVResponse;
- (void)logCoreDAVRequest:(id)a0 withTaskIdentifier:(id)a1;
- (void)logCoreDAVResponseHeaders:(id)a0 andStatusCode:(long long)a1 withTaskIdentifier:(id)a2;
- (void)logCoreDAVResponseSnippet:(id)a0;
- (void)logCoreDAVResponseSnippet:(id)a0 withTaskIdentifier:(id)a1;
- (void)logCoreDAVResponseSnippet:(id)a0 withTaskIdentifier:(id)a1 isBody:(BOOL)a2;

@end
