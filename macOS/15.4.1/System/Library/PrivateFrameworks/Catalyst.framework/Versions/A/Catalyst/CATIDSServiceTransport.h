@class NSMutableArray, CATIDSServiceConnection;

@interface CATIDSServiceTransport : CATTransport <CATIDSServiceConnectionDelegate> {
    CATIDSServiceConnection *mConnection;
    NSMutableArray *mReceiveQueue;
    BOOL mIsActive;
    BOOL mDidDelegateInvalidation;
}

- (id)name;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)resumeConnection;
- (void)suspendConnection;
- (void)invalidateConnection;
- (void)connection:(id)a0 receivedData:(id)a1;
- (void)connectionClosed:(id)a0;
- (id)operationToSendMessage:(id)a0;
- (void)serviceReceiveQueue;
- (void)tryReportingInvalidation;

@end
