@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group, OS_xpc_object;

@interface CMIOUserNotification : CMCaptureUserNotification {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_responseGroup;
    unsigned long long _response;
    NSObject<OS_xpc_object> *_userNotificationServiceConnection;
    BOOL _responseIsValid;
    BOOL _connectionIsValid;
}

- (void)dealloc;
- (id)cancel;
- (void)_closeConnection;
- (id)_createOrUpdate:(const char *)a0 withTimeout:(double)a1 flags:(unsigned long long)a2 dictionary:(id)a3;
- (void)_handleXPCEvent:(id)a0;
- (void)asyncResponse:(id)a0 block:(id /* block */)a1;
- (id)initNotificationWithTimeout:(double)a0 flags:(unsigned long long)a1 dictionary:(id)a2 error:(id *)a3;
- (unsigned long long)receiveResponseWithTimeout:(double)a0 error:(id *)a1;
- (id)updateWithTimeout:(double)a0 flags:(unsigned long long)a1 dictionary:(id)a2;

@end
