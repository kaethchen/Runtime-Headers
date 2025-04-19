@class MPPMediaPredicate;

@interface MPPConditionalPredicate : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasConditionalPredicate;
@property (retain, nonatomic) MPPMediaPredicate *conditionalPredicate;
@property (readonly, nonatomic) BOOL hasThenPredicate;
@property (retain, nonatomic) MPPMediaPredicate *thenPredicate;
@property (readonly, nonatomic) BOOL hasElsePredicate;
@property (retain, nonatomic) MPPMediaPredicate *elsePredicate;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
