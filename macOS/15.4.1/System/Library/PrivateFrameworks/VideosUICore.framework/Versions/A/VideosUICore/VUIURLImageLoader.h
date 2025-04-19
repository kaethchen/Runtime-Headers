@class NSURLSession, NSMutableDictionary, NSString, AMSURLSession, NSObject;
@protocol OS_dispatch_queue;

@interface VUIURLImageLoader : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate, VUIImageLoader>

@property (readonly, nonatomic) NSMutableDictionary *loadOptionsByID;
@property (readonly, nonatomic) NSMutableDictionary *loadIDsByURL;
@property (readonly, nonatomic) NSMutableDictionary *taskOptionsByURL;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly, nonatomic) AMSURLSession *session;
@property (readonly, nonatomic) NSURLSession *urlSession;
@property (readonly, nonatomic) BOOL useMinimalSessionImageLoading;
@property (nonatomic, getter=isImageRotationEnabled) BOOL imageRotationEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)sharedInstanceWithMinimalSession:(BOOL)a0;

- (void).cxx_destruct;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (id)URLForObject:(id)a0;
- (void)cancelLoad:(id)a0;
- (id)imageKeyForObject:(id)a0;
- (id)loadImageForObject:(id)a0 scaleToSize:(struct CGSize { double x0; double x1; })a1 cropToFit:(BOOL)a2 imageDirection:(long long)a3 requestLoader:(id)a4 completionHandler:(id /* block */)a5;
- (void)_executeOnProcessingQueue:(id /* block */)a0;
- (id)initWithMinimalSessionImageLoading:(BOOL)a0;

@end
