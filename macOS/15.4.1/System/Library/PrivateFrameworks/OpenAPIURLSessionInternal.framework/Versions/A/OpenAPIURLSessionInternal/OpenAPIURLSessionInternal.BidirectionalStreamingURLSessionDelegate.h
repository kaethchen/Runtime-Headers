@class NSURLSession, NSURLSessionTask, NSURLResponse, NSURLSessionDataTask, NSInputStream;

@interface OpenAPIURLSessionInternal.BidirectionalStreamingURLSessionDelegate : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate> {
    void /* unknown type, empty encoding */ requestBody;
    void /* unknown type, empty encoding */ hasAlreadyIteratedRequestBody;
    void /* unknown type, empty encoding */ hasSuspendedURLSessionTask;
    void /* unknown type, empty encoding */ requestStreamBufferSize;
    void /* unknown type, empty encoding */ requestStream;
    void /* unknown type, empty encoding */ responseContinuation;
    void /* unknown type, empty encoding */ responseBodyStream;
    void /* unknown type, empty encoding */ responseBodyStreamSource;
    void /* unknown type, empty encoding */ callbackLock;
}

- (id)init;
- (void).cxx_destruct;
- (void)URLSession:(NSURLSession *)a0 dataTask:(NSURLSessionDataTask *)a1 didReceiveResponse:(NSURLResponse *)a2 completionHandler:(void (^)(long long))a3;
- (void)URLSession:(NSURLSession *)a0 task:(NSURLSessionTask *)a1 needNewBodyStream:(void (^)(NSInputStream *))a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;

@end
