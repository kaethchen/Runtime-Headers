@class NSURLSession, NSOutputStream, NSString, NSURLSessionStreamTask, NSInputStream;

@interface RPStreamDevice : NSObject <NSURLSessionStreamDelegate>

@property (retain) NSURLSession *session;
@property (retain) NSURLSessionStreamTask *task;
@property (retain) NSInputStream *inputStream;
@property (retain) NSOutputStream *outputStream;
@property void /* function */ *cb;
@property void *cbUserContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)URLSession:(id)a0 streamTask:(id)a1 didBecomeInputStream:(id)a2 outputStream:(id)a3;
- (id)initWithHost:(id)a0 port:(id)a1 cb:(void /* function */ *)a2 userContext:(void *)a3 queue:(id)a4;

@end
