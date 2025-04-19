@class VSOptional, NSURLSessionTask, NSOperationQueue, VSAuditToken;

@interface VSVerificationStateResetOperation : VSAsyncOperation

@property (retain, nonatomic) NSURLSessionTask *resetStateTask;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) VSOptional *result;
@property (copy, nonatomic) VSAuditToken *auditToken;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)executionDidBegin;

@end
