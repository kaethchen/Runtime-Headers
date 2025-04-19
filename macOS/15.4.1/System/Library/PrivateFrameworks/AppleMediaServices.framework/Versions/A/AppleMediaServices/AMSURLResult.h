@class NSString, NSDictionary, NSData, NSURLSessionTaskMetrics, NSURLResponse, NSURLSessionTask;

@interface AMSURLResult : NSObject

@property (retain) NSData *data;
@property (readonly) NSDictionary *loadURLEventDictionary;
@property (retain) NSString *logUUID;
@property (readonly) NSURLSessionTaskMetrics *taskMetrics;
@property (retain) NSURLResponse *response;
@property (retain) NSURLSessionTask *task;
@property (retain) id object;
@property (readonly) NSString *responseCorrelationId;
@property (readonly) long long responseStatusCode;
@property (readonly) NSDictionary *responseHeaders;

+ (id)URLResultPromiseWithTaskInfo:(id)a0 object:(id)a1;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)initWithTask:(id)a0 response:(id)a1 data:(id)a2 object:(id)a3;
- (id)initWithTask:(id)a0 response:(id)a1 data:(id)a2 object:(id)a3 logUUID:(id)a4 taskMetrics:(id)a5 loadURLEventDictionary:(id)a6;
- (id)initWithTaskInfo:(id)a0 object:(id)a1 loadURLEventDictionary:(id)a2;

@end
