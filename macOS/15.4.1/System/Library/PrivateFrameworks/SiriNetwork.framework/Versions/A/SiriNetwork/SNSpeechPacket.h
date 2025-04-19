@class SNSpeechPacketInternal, NSArray, NSString;

@interface SNSpeechPacket : NSObject <SNSessionObject, SNThunking>

@property (retain, nonatomic) SNSpeechPacketInternal *underlyingSpeechPacket;
@property (retain, nonatomic) NSArray *packets;
@property (nonatomic) long long packetNumber;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isProvisional;
- (BOOL)isRestartable;
- (void)logDiagnostics;
- (BOOL)supportedByRemoteLimitedSession;
- (BOOL)bufferingAllowedDuringActiveSession;
- (BOOL)isRetryable;
- (id)serializedAceDataError:(id *)a0;
- (id)sessionRequestId;
- (void)setSessionRequestId:(id)a0;
- (void)siriNetwork_invokeThunk;
- (BOOL)supportedByLocalSession;

@end
