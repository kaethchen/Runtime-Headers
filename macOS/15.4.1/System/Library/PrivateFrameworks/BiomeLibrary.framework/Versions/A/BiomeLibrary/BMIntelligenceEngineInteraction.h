@class NSData, NSUUID, NSString, NSArray, BMIntelligenceEngineInteractionTranscriptStatementID, NSDate, BMIntelligenceEngineInteractionTupleInteraction;

@interface BMIntelligenceEngineInteraction : BMEventBase <BMStoreData> {
    BOOL _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
    NSData *_raw_appIntentInvocationUUID;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) BMIntelligenceEngineInteractionTranscriptStatementID *transcriptStatementId;
@property (readonly, nonatomic) NSUUID *appIntentInvocationUUID;
@property (readonly, nonatomic) NSString *sirikitIntentItemId;
@property (readonly, nonatomic) int trigger;
@property (readonly, nonatomic) BMIntelligenceEngineInteractionTupleInteraction *tupleInteraction;
@property (readonly, nonatomic) NSArray *candidateInteractions;
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
- (id)initWithAbsoluteTimestamp:(id)a0 transcriptStatementId:(id)a1 appIntentInvocationUUID:(id)a2 sirikitIntentItemId:(id)a3 trigger:(int)a4 tupleInteraction:(id)a5 candidateInteractions:(id)a6;
- (id)_candidateInteractionsJSONArray;

@end
