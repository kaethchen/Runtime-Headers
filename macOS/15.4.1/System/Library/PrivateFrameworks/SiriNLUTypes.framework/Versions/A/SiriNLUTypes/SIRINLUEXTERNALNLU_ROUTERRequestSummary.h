@class NSString, NSMutableArray;

@interface SIRINLUEXTERNALNLU_ROUTERRequestSummary : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUserQuery;
@property (retain, nonatomic) NSString *userQuery;
@property (retain, nonatomic) NSMutableArray *turnSummaries;

+ (Class)turnSummariesType;

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
- (void)addTurnSummaries:(id)a0;
- (void)clearTurnSummaries;
- (id)turnSummariesAtIndex:(unsigned long long)a0;
- (unsigned long long)turnSummariesCount;

@end
