@class NSData;

@interface STSchemaSTAnswerSynthesisDataMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char numLLMCalls : 1; unsigned char promptLength : 1; unsigned char responseLength : 1; unsigned char numAnswers : 1; unsigned char numQueriesTriggered : 1; } _has;
}

@property (nonatomic) unsigned int numLLMCalls;
@property (nonatomic) BOOL hasNumLLMCalls;
@property (nonatomic) unsigned int promptLength;
@property (nonatomic) BOOL hasPromptLength;
@property (nonatomic) unsigned int responseLength;
@property (nonatomic) BOOL hasResponseLength;
@property (nonatomic) unsigned int numAnswers;
@property (nonatomic) BOOL hasNumAnswers;
@property (nonatomic) unsigned int numQueriesTriggered;
@property (nonatomic) BOOL hasNumQueriesTriggered;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteNumAnswers;
- (void)deleteNumLLMCalls;
- (void)deleteNumQueriesTriggered;
- (void)deletePromptLength;
- (void)deleteResponseLength;
- (id)suppressMessageUnderConditions;

@end
