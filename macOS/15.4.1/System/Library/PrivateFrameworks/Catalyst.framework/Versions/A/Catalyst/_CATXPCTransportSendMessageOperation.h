@class CATXPCTransport, CATMessage;

@interface _CATXPCTransportSendMessageOperation : CATOperation

@property (weak, nonatomic) CATXPCTransport *transport;
@property (retain, nonatomic) CATMessage *message;

- (void).cxx_destruct;
- (BOOL)isAsynchronous;
- (void)main;
- (void)didFailWithError:(id)a0;
- (void)didProcessMessage;

@end
