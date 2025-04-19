@interface OBEXSession : NSObject {
    BOOL mHasOBEXConnection;
    BOOL mIsServer;
    unsigned short mMaxPacketLength;
    char *mReceivePacketBuffer;
    unsigned long long mResponsePacketDataLengthExpected;
    unsigned long long mResponsePacketDataLengthSoFar;
    unsigned char mIncompletePacketResponseCode;
    struct OpaquePrivOBEXSessionData { void /* function */ *x0; SEL x1; void *x2; void *x3; unsigned char x4; } *mPrivateOBEXSessionData;
    unsigned short mTheirMaxPacketLength;
    unsigned short mOurMaxPacketLength;
}

- (void)dealloc;
- (id)init;
- (unsigned char)addIncompletePacketData:(char *)a0 length:(unsigned long long)a1;
- (void)logDataToAFile:(char *)a0 data:(char *)a1 dataLength:(unsigned int)a2;
- (void)setEventRefCon:(void *)a0;
- (void)myOpenTransportCallback:(id)a0 status:(id)a1;
- (int)sendDataToTransport:(void *)a0 dataLength:(unsigned long long)a1;
- (void)setEventSelector:(SEL)a0 target:(id)a1 refCon:(void *)a2;
- (int)OBEXAbort:(void *)a0 optionalHeadersLength:(unsigned long long)a1 eventSelector:(SEL)a2 selectorTarget:(id)a3 refCon:(void *)a4;
- (int)OBEXAbortResponse:(unsigned char)a0 optionalHeaders:(void *)a1 optionalHeadersLength:(unsigned long long)a2 eventSelector:(SEL)a3 selectorTarget:(id)a4 refCon:(void *)a5;
- (int)OBEXConnect:(unsigned char)a0 maxPacketLength:(unsigned short)a1 optionalHeaders:(void *)a2 optionalHeadersLength:(unsigned long long)a3 eventSelector:(SEL)a4 selectorTarget:(id)a5 refCon:(void *)a6;
- (int)OBEXConnectResponse:(unsigned char)a0 flags:(unsigned char)a1 maxPacketLength:(unsigned short)a2 optionalHeaders:(void *)a3 optionalHeadersLength:(unsigned long long)a4 eventSelector:(SEL)a5 selectorTarget:(id)a6 refCon:(void *)a7;
- (int)OBEXDisconnect:(void *)a0 optionalHeadersLength:(unsigned long long)a1 eventSelector:(SEL)a2 selectorTarget:(id)a3 refCon:(void *)a4;
- (int)OBEXDisconnectResponse:(unsigned char)a0 optionalHeaders:(void *)a1 optionalHeadersLength:(unsigned long long)a2 eventSelector:(SEL)a3 selectorTarget:(id)a4 refCon:(void *)a5;
- (int)OBEXGet:(unsigned char)a0 headers:(void *)a1 headersLength:(unsigned long long)a2 eventSelector:(SEL)a3 selectorTarget:(id)a4 refCon:(void *)a5;
- (int)OBEXGetResponse:(unsigned char)a0 optionalHeaders:(void *)a1 optionalHeadersLength:(unsigned long long)a2 eventSelector:(SEL)a3 selectorTarget:(id)a4 refCon:(void *)a5;
- (int)OBEXPut:(unsigned char)a0 headersData:(void *)a1 headersDataLength:(unsigned long long)a2 bodyData:(void *)a3 bodyDataLength:(unsigned long long)a4 eventSelector:(SEL)a5 selectorTarget:(id)a6 refCon:(void *)a7;
- (int)OBEXPutResponse:(unsigned char)a0 optionalHeaders:(void *)a1 optionalHeadersLength:(unsigned long long)a2 eventSelector:(SEL)a3 selectorTarget:(id)a4 refCon:(void *)a5;
- (int)OBEXSetPath:(unsigned char)a0 constants:(unsigned char)a1 optionalHeaders:(void *)a2 optionalHeadersLength:(unsigned long long)a3 eventSelector:(SEL)a4 selectorTarget:(id)a5 refCon:(void *)a6;
- (int)OBEXSetPathResponse:(unsigned char)a0 optionalHeaders:(void *)a1 optionalHeadersLength:(unsigned long long)a2 eventSelector:(SEL)a3 selectorTarget:(id)a4 refCon:(void *)a5;
- (void)clientHandleIncomingData:(struct OBEXTransportEvent { unsigned int x0; int x1; void *x2; unsigned long long x3; } *)a0;
- (int)closeTransportConnection;
- (unsigned short)getAvailableCommandPayloadLength:(unsigned char)a0;
- (unsigned short)getAvailableCommandResponsePayloadLength:(unsigned char)a0;
- (char *)getBufferedPacketData:(unsigned long long *)a0;
- (void)getCurrentOBEXCommandData:(struct OpaquePrivOBEXSessionData { void /* function */ *x0; SEL x1; void *x2; void *x3; unsigned char x4; } *)a0;
- (unsigned short)getMaxPacketLength;
- (id)getPathOfFileAsPeerToApp:(id)a0;
- (void)handleDesegmentation:(char *)a0 dataLength:(unsigned short)a1 completePacket:(char *)a2;
- (unsigned char)hasDataFromPreviousPacket;
- (BOOL)hasOpenOBEXConnection;
- (unsigned char)hasOpenTransportConnection;
- (int)openTransportConnection:(SEL)a0 selectorTarget:(id)a1 refCon:(void *)a2;
- (void)resetCurrentOBEXCommandData;
- (void)resetIncompletePacketBuffer;
- (int)sendCommandFormatted:(unsigned long long)a0 format:(const char *)a1;
- (void)serverHandleIncomingData:(struct OBEXTransportEvent { unsigned int x0; int x1; void *x2; unsigned long long x3; } *)a0;
- (void)setEventCallback:(void /* function */ *)a0;
- (void)setHasOpenOBEXConnection:(BOOL)a0;
- (void)setIncompletePacketInfo:(unsigned long long)a0 responseCode:(unsigned char)a1;

@end
