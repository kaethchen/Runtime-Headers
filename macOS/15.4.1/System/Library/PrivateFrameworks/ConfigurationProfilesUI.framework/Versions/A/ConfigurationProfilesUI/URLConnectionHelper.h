@class URLConnectionOptions, NSHTTPURLResponse, NSURLResponse, URLConnectionLoader, NSError, NSURL, NSData;

@interface URLConnectionHelper : NSObject

@property (retain) URLConnectionLoader *loader;
@property (readonly) URLConnectionOptions *options;
@property (readonly) NSURLResponse *response;
@property (readonly) NSError *error;
@property (readonly) NSURL *redirectURL;
@property (readonly) NSData *responseData;
@property (readonly) NSHTTPURLResponse *httpResponse;
@property (readonly) long long statusCode;
@property (readonly) NSURL *downloadedFileURL;

+ (id)helperWithOptions:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)sendSynchronousRequest:(id)a0 forOpDesc:(id)a1 returningError:(id *)a2;
- (void)startDataRequest:(id)a0 opDesc:(id)a1 completion:(id /* block */)a2;
- (void)startDownloadRequest:(id)a0 opDesc:(id)a1 completion:(id /* block */)a2;

@end
