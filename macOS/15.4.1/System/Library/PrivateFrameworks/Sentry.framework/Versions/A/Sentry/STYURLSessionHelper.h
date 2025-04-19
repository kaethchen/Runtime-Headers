@class NSURLSession, NSString, STYDiagnosticUploader, NSMutableDictionary;

@interface STYURLSessionHelper : NSObject <NSURLSessionDataDelegate> {
    STYDiagnosticUploader *_uploader;
    NSMutableDictionary *_responseData;
}

@property (readonly, nonatomic) NSURLSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sessionWithConfiguration:(id)a0 uploader:(id)a1 queue:(id)a2;

- (void).cxx_destruct;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (id)_responseForFinishedTask:(id)a0;
- (id)initWithConfiguration:(id)a0 uploader:(id)a1 queue:(id)a2;

@end
