@class NSString, NSArray;

@interface SNSpeechPacketInternal : NSObject <SNThunking> {
    void /* unknown type, empty encoding */ internalAceId;
    void /* unknown type, empty encoding */ internalRefId;
    void /* unknown type, empty encoding */ packets;
}

@property (nonatomic, copy) NSString *internalAceId;
@property (nonatomic, copy) NSString *internalRefId;
@property (nonatomic, copy) NSArray *packets;
@property (nonatomic) void /* unknown type, empty encoding */ packetNumber;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isProvisional;
- (BOOL)isRestartable;
- (void)logDiagnostics;
- (BOOL)supportedByRemoteLimitedSession;
- (BOOL)bufferingAllowedDuringActiveSession;
- (BOOL)isRetryable;
- (id)serializedAceDataAndReturnError:(id *)a0;
- (id)sessionRequestId;
- (void)setSessionRequestId:(id)a0;
- (void)siriNetwork_invokeThunk;
- (BOOL)supportedByLocalSession;

@end
