@class NSString, NSDictionary, NSError, NSMutableData;

@interface SMIncompatibleAppUpdater : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate>

@property (retain) NSDictionary *catalog;
@property (retain) NSError *error;
@property (retain) NSString *downloadLocation;
@property BOOL startedUpdate;
@property BOOL appleEVVerified;
@property BOOL requireEVValidation;
@property (retain) NSMutableData *catalogData;
@property (readonly) BOOL updateComplete;
@property (readonly) BOOL updateSuccessful;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)installClient:(id)a0 didFailWithError:(id)a1;
- (void)installClientDidFinish:(id)a0;
- (void)installClientDidBegin:(id)a0;
- (void)checkForUpdates;
- (void)_fetchCatalog;
- (void)_finishedLoadingCatalog:(id)a0;
- (void)_installUpdatePackage;
- (id)_productDictForCompatibilityUpdate:(id)a0 fromCatalog:(id)a1;
- (id)_softwareUpdateCatalogURL;
- (void)completedWithSuccess:(BOOL)a0;
- (void)startLoadingCatalog;

@end
