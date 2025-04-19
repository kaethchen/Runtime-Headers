@class NSString, NSData;

@interface POMMESSchemaPOMMESRequestResult : SISchemaInstrumentationMessage {
    struct { unsigned char pommesConfidenceScore : 1; unsigned char isFromResponseCache : 1; unsigned char pegasusPromptType : 1; unsigned char isLowConfidenceKnowledgeResult : 1; } _has;
}

@property (nonatomic) double pommesConfidenceScore;
@property (nonatomic) BOOL hasPommesConfidenceScore;
@property (copy, nonatomic) NSString *pegasusDomain;
@property (nonatomic) BOOL hasPegasusDomain;
@property (nonatomic) BOOL isFromResponseCache;
@property (nonatomic) BOOL hasIsFromResponseCache;
@property (nonatomic) int pegasusPromptType;
@property (nonatomic) BOOL hasPegasusPromptType;
@property (nonatomic) BOOL isLowConfidenceKnowledgeResult;
@property (nonatomic) BOOL hasIsLowConfidenceKnowledgeResult;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsFromResponseCache;
- (void)deleteIsLowConfidenceKnowledgeResult;
- (void)deletePegasusDomain;
- (void)deletePegasusPromptType;
- (void)deletePommesConfidenceScore;
- (id)suppressMessageUnderConditions;

@end
