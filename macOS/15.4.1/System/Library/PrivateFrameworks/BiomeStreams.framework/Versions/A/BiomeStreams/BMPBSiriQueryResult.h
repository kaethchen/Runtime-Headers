@class NSString;

@interface BMPBSiriQueryResult : PBCodable <NSCopying> {
    struct { unsigned char confidence : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasQid;
@property (retain, nonatomic) NSString *qid;
@property (readonly, nonatomic) BOOL hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) double confidence;

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
