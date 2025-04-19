@class NSError, NSString, NSMutableDictionary, MRSupportedProtocolMessages, MSVMessageParser, MRDeviceInfo, MRExternalDeviceTransportConnection, NSObject;
@protocol OS_dispatch_queue, MRProtocolClientConnectionDelegate;

@interface MRProtocolClientConnection : NSObject <MSVMessageParserDelegate, MRExternalDeviceTransportConnectionObserver> {
    MSVMessageParser *_parser;
    unsigned long long _firstClientNanoseconds;
    unsigned long long _firstDeviceTicks;
    MRDeviceInfo *_deviceInfo;
    MRSupportedProtocolMessages *_supportedMessages;
    NSMutableDictionary *_pendingReplyQueue;
}

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sendQueue;
@property (retain, nonatomic) MRDeviceInfo *deviceInfo;
@property (retain, nonatomic) MRSupportedProtocolMessages *supportedMessages;
@property (retain, nonatomic) NSString *label;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *replyQueue;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL disconnected;
@property (readonly, nonatomic) MRExternalDeviceTransportConnection *connection;
@property (weak, nonatomic) id<MRProtocolClientConnectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)sendMessage:(id)a0;
- (id)dataForMessage:(id)a0;
- (id)decryptData:(id)a0 error:(id *)a1;
- (void)disconnectWithError:(id)a0;
- (id)encryptDataForMessage:(id)a0;
- (id)initWithConnection:(id)a0 replyQueue:(id)a1;
- (void)parser:(id)a0 didParseMessage:(id)a1;
- (void)sendMessage:(id)a0 reply:(id /* block */)a1;
- (void)sendMessage:(id)a0 timeout:(double)a1 reply:(id /* block */)a2;
- (void)transport:(id)a0 didReceiveData:(id)a1;
- (void)transportDidClose:(id)a0 error:(id)a1;

@end
