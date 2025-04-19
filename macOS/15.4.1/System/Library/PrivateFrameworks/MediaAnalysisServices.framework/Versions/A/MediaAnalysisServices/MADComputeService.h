@class NSXPCConnection, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MADComputeService : NSObject <MADComputeServiceClientProtocol> {
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_progressHandlerQueue;
    NSMutableDictionary *_progressHandlers;
    NSObject<OS_dispatch_queue> *_resultsHandlerQueue;
    NSMutableDictionary *_resultsHandlers;
}

+ (id)allowedClasses;
+ (id)serviceName;
+ (id)service;
+ (id)serverProtocol;
+ (void)configureClientInterface:(id)a0;
+ (void)configureServerInterface:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)connection;
- (id)initInternal;
- (void)cancelAllRequests;
- (BOOL)removeRequest:(id)a0 error:(id *)a1;
- (id)resultDirectoryURL;
- (int)deregisterProgressHandlerForRequestID:(id)a0;
- (int)deregisterResultsHandlerForRequestID:(id)a0;
- (id)extensionDataForResultDirectoryURL:(id *)a0 error:(id *)a1;
- (int)registerProgressHandler:(id /* block */)a0 requestID:(id)a1;
- (int)registerResultsHandler:(id /* block */)a0 requestID:(id)a1;
- (BOOL)_validFileURL:(id)a0 toRequestID:(id)a1;
- (void)cancelWithRequestID:(id)a0;
- (id)extensionDataFromAssetURLs:(id)a0 error:(id *)a1;
- (id)fetchResultsWithRequestID:(id)a0;
- (void)handleResults:(id)a0 assetRepresentation:(id)a1 requestID:(id)a2 error:(id)a3 acknowledgement:(id /* block */)a4;
- (BOOL)pauseWithRequestID:(id)a0 error:(id *)a1;
- (id)performRequests:(id)a0 assetURLs:(id)a1 options:(id)a2 progressHandler:(id /* block */)a3 resultsHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (id)performRequests:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1 options:(id)a2 progressHandler:(id /* block */)a3 resultsHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (BOOL)purgeResultsWithRequestID:(id)a0 error:(id *)a1;
- (void)reportProgress:(double)a0 requestID:(id)a1;
- (void)resumeWithRequestID:(id)a0 progressHandler:(id /* block */)a1 resultsHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)scheduleRequests:(id)a0 assetURLs:(id)a1 options:(id)a2 error:(id *)a3;

@end
