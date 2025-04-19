@class NSMutableArray;

@interface SIRINLUEXTERNALNLU_ROUTERQueryDecorationOutput : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *requiredContexts;
@property (retain, nonatomic) NSMutableArray *utteranceContexts;
@property (retain, nonatomic) NSMutableArray *originalRankedTools;
@property (retain, nonatomic) NSMutableArray *adjustedRankedTools;
@property (retain, nonatomic) NSMutableArray *originalRankedSpans;
@property (retain, nonatomic) NSMutableArray *adjustedRankedSpans;
@property (retain, nonatomic) NSMutableArray *spans;
@property (retain, nonatomic) NSMutableArray *contexts;

+ (Class)contextType;
+ (Class)adjustedRankedSpansType;
+ (Class)adjustedRankedToolsType;
+ (Class)originalRankedSpansType;
+ (Class)originalRankedToolsType;
+ (Class)requiredContextType;
+ (Class)spansType;
+ (Class)utteranceContextType;

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
- (void)clearSpans;
- (unsigned long long)spansCount;
- (void)addContext:(id)a0;
- (id)contextAtIndex:(unsigned long long)a0;
- (void)addRequiredContext:(id)a0;
- (void)addSpans:(id)a0;
- (void)addUtteranceContext:(id)a0;
- (id)requiredContextAtIndex:(unsigned long long)a0;
- (id)spansAtIndex:(unsigned long long)a0;
- (id)utteranceContextAtIndex:(unsigned long long)a0;
- (void)addAdjustedRankedSpans:(id)a0;
- (void)addAdjustedRankedTools:(id)a0;
- (void)addOriginalRankedSpans:(id)a0;
- (void)addOriginalRankedTools:(id)a0;
- (id)adjustedRankedSpansAtIndex:(unsigned long long)a0;
- (unsigned long long)adjustedRankedSpansCount;
- (id)adjustedRankedToolsAtIndex:(unsigned long long)a0;
- (unsigned long long)adjustedRankedToolsCount;
- (void)clearAdjustedRankedSpans;
- (void)clearAdjustedRankedTools;
- (void)clearContexts;
- (void)clearOriginalRankedSpans;
- (void)clearOriginalRankedTools;
- (void)clearRequiredContexts;
- (void)clearUtteranceContexts;
- (unsigned long long)contextsCount;
- (id)originalRankedSpansAtIndex:(unsigned long long)a0;
- (unsigned long long)originalRankedSpansCount;
- (id)originalRankedToolsAtIndex:(unsigned long long)a0;
- (unsigned long long)originalRankedToolsCount;
- (unsigned long long)requiredContextsCount;
- (unsigned long long)utteranceContextsCount;

@end
