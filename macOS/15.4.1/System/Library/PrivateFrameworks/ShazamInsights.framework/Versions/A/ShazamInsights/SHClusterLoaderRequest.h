@class NSURL;

@interface SHClusterLoaderRequest : NSObject

@property (readonly) NSURL *sourceURL;
@property (readonly) NSURL *outputURL;
@property (readonly) long long type;
@property (readonly) BOOL shouldDeleteExistingDatabaseAtOutputURL;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0 configuration:(id)a1;
- (id)initWithType:(long long)a0 sourceURL:(id)a1 outputURL:(id)a2 configuration:(id)a3;
- (void)sourceURLForRequestForStorefront:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;

@end
