@class AMSURLAction, NSURLSessionTask, NSURLSessionTaskMetrics, NSURLResponse, NSMutableData, NSError, NSURLRequest;

@interface _TtC18AppleMediaServicesP33_1DA2568BEFA51656D884E7AA9CC6F3E229LoggingOnlyURLProtocolHandler : NSObject <AMSURLHandling>

@property (nonatomic, retain) void /* unknown type, empty encoding */ session;

- (id)init;
- (void).cxx_destruct;
- (void)decodeMutableData:(NSMutableData *)a0 task:(NSURLSessionTask *)a1 completionHandler:(void (^)(id, NSError *))a2;
- (void)didCreateTask:(NSURLSessionTask *)a0 fromRequest:(NSURLRequest *)a1 completionHandler:(void (^)(BOOL, NSError *))a2;
- (void)handleCompletionWithTask:(NSURLSessionTask *)a0 metrics:(NSURLSessionTaskMetrics *)a1 decodedObject:(id)a2 completionHandler:(void (^)(AMSURLAction *))a3;
- (void)handleResponse:(NSURLResponse *)a0 task:(NSURLSessionTask *)a1 completionHandler:(void (^)(AMSURLAction *))a2;
- (void)reconfigureNewRequest:(NSURLRequest *)a0 originalTask:(NSURLSessionTask *)a1 redirect:(BOOL)a2 completionHandler:(void (^)(NSURLRequest *, NSError *))a3;

@end
