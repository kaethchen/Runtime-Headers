@class CMCaptureFrameSenderServiceBroker, NSObject;
@protocol OS_dispatch_queue;

@interface CMCaptureFrameSenderServiceBrokerSingleton : NSObject {
    char *_frameSenderServiceBrokerQueueLabel;
    unsigned long long _frameSenderServiceBrokerQueueLabelLength;
    NSObject<OS_dispatch_queue> *_frameSenderServiceBrokerQueue;
    CMCaptureFrameSenderServiceBroker *_frameSenderServiceBroker;
    NSObject<OS_dispatch_queue> *_frameSenderServiceBrokerReconnectionQueue;
    int _numberOfTimesConnectionHasBroken;
    BOOL _connectionWasInterrupted;
}

+ (id)frameSenderServiceBrokerSingleton;

- (id)init;
- (void)_runBlockOnFrameSenderServiceQueue:(id /* block */)a0;
- (void)_updateFrameSenderService;
- (int)publishEndpoint:(id)a0 endpointUniqueID:(id)a1 endpointType:(id)a2 endpointPID:(int)a3 endpointProxyPID:(int)a4 endpointAuditToken:(id)a5 endpointProxyAuditToken:(id)a6 endpointCameraUniqueID:(id)a7;
- (int)suppressEndpointWithUniqueID:(id)a0;

@end
