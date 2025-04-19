@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface EXSXPCResponseManager : NSObject

@property (retain, nonatomic) NSXPCConnection *clientConnection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *replyQueue;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithXPCConnection:(id)a0;
- (void)dispatchOnReplyQueue:(id /* block */)a0;
- (void)downloadFinishedForRequestID:(id)a0 error:(id)a1;
- (void)downloadProgressForRequestID:(id)a0 size:(id)a1 total:(id)a2;
- (void)finishAvailabilityRequestWithResponse:(id)a0 availabilities:(id)a1 error:(id)a2;
- (void)getGrantedDelegatesListFinishedForRequestID:(id)a0 results:(id)a1 error:(id)a2;
- (void)grantedDelegateRequestFinishedForRequestID:(id)a0 error:(id)a1;
- (void)searchDirectoryFinishedForRequestID:(id)a0 error:(id)a1;
- (void)searchDirectoryForRequestID:(id)a0 results:(id)a1;

@end
