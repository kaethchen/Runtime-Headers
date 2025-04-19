@protocol CATSharingBroadcastPrimitives, CATDictionaryCodable;

@interface CATSendBroadcastMessageOperation : CATOperation {
    id<CATSharingBroadcastPrimitives> mBroadcastPrimitives;
    id<CATDictionaryCodable> mMessage;
}

- (void).cxx_destruct;
- (BOOL)isAsynchronous;
- (void)main;
- (id)initWithBroadcastPrimitive:(id)a0 message:(id)a1;
- (void)sendMessage;

@end
