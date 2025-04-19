@class NSUUID, NSArray, NSString, NSDate, BMFeedbackLearningTupleInteractionTupleInteraction, NSData;

@interface BMFeedbackLearningTupleInteraction : BMEventBase <BMStoreData> {
    NSData *_raw_eventId;
    NSData *_raw_sessionId;
    BOOL _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSUUID *eventId;
@property (readonly, nonatomic) NSUUID *sessionId;
@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) BMFeedbackLearningTupleInteractionTupleInteraction *tupleInteraction;
@property (readonly, nonatomic) NSArray *candidateInteractions;
@property (readonly, nonatomic) unsigned int statementId;
@property (nonatomic) BOOL hasStatementId;
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
- (id)_candidateInteractionsJSONArray;
- (id)initWithEventId:(id)a0 sessionId:(id)a1 absoluteTimestamp:(id)a2 tupleInteraction:(id)a3 candidateInteractions:(id)a4;
- (id)initWithEventId:(id)a0 sessionId:(id)a1 absoluteTimestamp:(id)a2 tupleInteraction:(id)a3 candidateInteractions:(id)a4 statementId:(id)a5;

@end
