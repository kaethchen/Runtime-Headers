@class NSString;

@interface BMCommCenterEmergencyVoiceCall : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *emNum;
@property (readonly, nonatomic) NSString *MCC;
@property (readonly, nonatomic) NSString *MNC;
@property (readonly, nonatomic) int matchedEmNumSource;
@property (readonly, nonatomic) int sip380Procedure;
@property (readonly, nonatomic) int sip380RedirectedURN;
@property (readonly, nonatomic) int callDuration;
@property (nonatomic) BOOL hasCallDuration;
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
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithEmNum:(id)a0 MCC:(id)a1 MNC:(id)a2 matchedEmNumSource:(int)a3 sip380Procedure:(int)a4 sip380RedirectedURN:(int)a5 callDuration:(id)a6;

@end
