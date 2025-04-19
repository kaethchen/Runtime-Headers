@protocol CATSharingDeviceSession, CATDictionaryCodable;

@interface CATSendDeviceSessionMessageOperation : CATOperation {
    id<CATSharingDeviceSession> mDeviceSession;
    id<CATDictionaryCodable> mMessage;
}

- (void).cxx_destruct;
- (BOOL)isAsynchronous;
- (void)main;
- (id)initWithDeviceSession:(id)a0 message:(id)a1;
- (void)sendMessage;

@end
