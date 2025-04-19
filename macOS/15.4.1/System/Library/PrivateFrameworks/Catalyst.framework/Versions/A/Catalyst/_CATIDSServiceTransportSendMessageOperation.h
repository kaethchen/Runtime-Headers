@class CATIDSServiceConnection, CATMessage, CATIDSServiceTransport;

@interface _CATIDSServiceTransportSendMessageOperation : CATOperation {
    CATIDSServiceTransport *mTransport;
    CATIDSServiceConnection *mConnection;
    CATMessage *mMessage;
}

- (void).cxx_destruct;
- (void)cancel;
- (BOOL)isAsynchronous;
- (void)main;
- (void)sendData;
- (void)didSendDataWithError:(id)a0;
- (id)initWithConnection:(id)a0 message:(id)a1;

@end
