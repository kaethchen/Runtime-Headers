@class NSUUID, NSString, NSData, NSDate, BMIntelligenceFlowIdentifiers, BMMonotonicTimestamp, BMSageMetadata, NSNumber;

@interface BMSageTranscript : BMEventBase <BMJoinableToIntelligenceFlowSession, BMJoinableToIntelligenceFlowSpan, BMJoinableToIntelligenceFlowClientSession, BMJoinableToIntelligenceFlowClientRequest, BMStoreData> {
    BOOL _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
    NSData *_raw__sessionID;
    NSData *_raw__bootSessionID;
    NSData *_raw__clientSessionID;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly) NSUUID *sessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSNumber *spanId;
@property (readonly) NSString *clientSessionId;
@property (readonly) NSString *clientRequestId;
@property (readonly, nonatomic) double _machAbsoluteTime;
@property (nonatomic) BOOL has_machAbsoluteTime;
@property (readonly, nonatomic) NSUUID *_sessionID;
@property (readonly, nonatomic) NSUUID *_bootSessionID;
@property (readonly, nonatomic) NSUUID *_clientSessionID;
@property (readonly, nonatomic) BMSageMetadata *_sageMetadata;
@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) NSString *eventLabel;
@property (readonly, nonatomic) NSString *eventType;
@property (readonly, nonatomic) int serializationFormat;
@property (readonly, nonatomic) NSData *eventPayload;
@property (readonly, nonatomic) BMMonotonicTimestamp *monotonicTimestamp;
@property (readonly, nonatomic) BMIntelligenceFlowIdentifiers *identifiers;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)sessionID;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (double)machAbsoluteTime;
- (id)clientSessionID;
- (id)bootSessionID;
- (BOOL)hasMachAbsoluteTime;
- (id)initWithAbsoluteTimestamp:(id)a0 _machAbsoluteTime:(id)a1 _sessionID:(id)a2 _bootSessionID:(id)a3 _clientSessionID:(id)a4 eventLabel:(id)a5 eventType:(id)a6 serializationFormat:(int)a7 eventPayload:(id)a8 _sageMetadata:(id)a9 monotonicTimestamp:(id)a10 identifiers:(id)a11;
- (id)initWithAbsoluteTimestamp:(id)a0 clientSessionID:(id)a1 eventLabel:(id)a2 eventType:(id)a3 serializationFormat:(int)a4 eventPayload:(id)a5;
- (id)initWithAbsoluteTimestamp:(id)a0 eventLabel:(id)a1 eventType:(id)a2 serializationFormat:(int)a3 eventPayload:(id)a4 monotonicTimestamp:(id)a5 identifiers:(id)a6;
- (id)initWithAbsoluteTimestamp:(id)a0 eventLabel:(id)a1 eventType:(id)a2 serializationFormat:(int)a3 eventPayload:(id)a4 sageMetadata:(id)a5 monotonicTimestamp:(id)a6;
- (id)initWithAbsoluteTimestamp:(id)a0 machAbsoluteTime:(id)a1 sessionID:(id)a2 bootSessionID:(id)a3 clientSessionID:(id)a4 eventLabel:(id)a5 eventType:(id)a6 serializationFormat:(int)a7 eventPayload:(id)a8;
- (id)sageMetadata;

@end
