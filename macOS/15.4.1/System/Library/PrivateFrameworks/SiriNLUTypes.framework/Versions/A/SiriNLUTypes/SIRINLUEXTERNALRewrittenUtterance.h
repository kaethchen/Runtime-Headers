@class SIRICOMMONStringValue;

@interface SIRINLUEXTERNALRewrittenUtterance : PBCodable <NSCopying> {
    struct { unsigned char score : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRewrittenUtterance;
@property (retain, nonatomic) SIRICOMMONStringValue *rewrittenUtterance;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) double score;

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

@end
