@class NSMutableArray;

@interface SIRINLUINTERNALCONTEXTUAL_SPAN_MATCHERContextualSpanMatcherResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *contextualSpans;

+ (Class)contextualSpansType;

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
- (void)addContextualSpans:(id)a0;
- (void)clearContextualSpans;
- (id)contextualSpansAtIndex:(unsigned long long)a0;
- (unsigned long long)contextualSpansCount;

@end
