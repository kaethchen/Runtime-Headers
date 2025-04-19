@class NSMutableArray;

@interface SIRINLUINTERNALSNLP_INTERMEDIATESNLPHandcraftedRules : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *ruleIds;

+ (Class)ruleIdsType;

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
- (id)ruleIdsAtIndex:(unsigned long long)a0;
- (void)addRuleIds:(id)a0;
- (void)clearRuleIds;
- (unsigned long long)ruleIdsCount;

@end
