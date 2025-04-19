@class SIRINLUEXTERNALNLU_ROUTERNLRoutingGenAIMetadata, NSMutableArray, NSString;

@interface SIRINLUEXTERNALNLU_ROUTERNLRouterServiceResponse : PBCodable <NSCopying> {
    struct { unsigned char routingDecision : 1; unsigned char routingDecisionSource : 1; unsigned char status : 1; } _has;
}

@property (nonatomic) BOOL hasRoutingDecision;
@property (nonatomic) int routingDecision;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray *siriXRewriteUtterances;
@property (retain, nonatomic) NSMutableArray *queryRewrites;
@property (nonatomic) BOOL hasRoutingDecisionSource;
@property (nonatomic) int routingDecisionSource;
@property (readonly, nonatomic) BOOL hasGenAiMetadata;
@property (retain, nonatomic) SIRINLUEXTERNALNLU_ROUTERNLRoutingGenAIMetadata *genAiMetadata;
@property (readonly, nonatomic) BOOL hasHeuristicRule;
@property (retain, nonatomic) NSString *heuristicRule;

+ (Class)queryRewritesType;
+ (Class)siriXRewriteUtterancesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsStatus:(id)a0;
- (id)statusAsString:(int)a0;
- (int)StringAsRoutingDecision:(id)a0;
- (int)StringAsRoutingDecisionSource:(id)a0;
- (void)addQueryRewrites:(id)a0;
- (void)addSiriXRewriteUtterances:(id)a0;
- (void)clearQueryRewrites;
- (void)clearSiriXRewriteUtterances;
- (id)queryRewritesAtIndex:(unsigned long long)a0;
- (unsigned long long)queryRewritesCount;
- (id)routingDecisionAsString:(int)a0;
- (id)routingDecisionSourceAsString:(int)a0;
- (id)siriXRewriteUtterancesAtIndex:(unsigned long long)a0;
- (unsigned long long)siriXRewriteUtterancesCount;

@end
