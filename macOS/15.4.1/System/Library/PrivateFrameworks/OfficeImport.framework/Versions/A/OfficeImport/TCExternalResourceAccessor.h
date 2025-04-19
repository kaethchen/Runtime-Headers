@class NSArray, NSString, NSURL, NSError, NSDictionary, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface TCExternalResourceAccessor : NSObject {
    NSURL *mDocumentURL;
    NSString *mExtractorServiceName;
    NSDictionary *mAccessErrorsForExternalResourceURLs;
    NSObject<OS_dispatch_queue> *mAccessorQueue;
    NSObject<OS_xpc_object> *mAccessorConnection;
}

@property (readonly, nonatomic) NSArray *externalResourceURLs;
@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;
- (void)accessExternalResourcesWithCompletionHandler:(id /* block */)a0;
- (BOOL)couldAccessExternalResourceURL:(id)a0 error:(out id *)a1;
- (id)initWithDocumentURL:(id)a0 extractorServiceName:(id)a1;
- (void)p_finishAccessingExternalResourcesWithExternalResourceURLs:(id)a0 accessErrorsForExternalResourceURLs:(id)a1 error:(id)a2 completionHandler:(id /* block */)a3;
- (id)p_localizedErrorWithError:(id)a0 forURL:(id)a1;

@end
