@class NSString;

@interface BMPBPhotosKnowledgeGraphEnrichmentEntity : PBCodable <NSCopying> {
    struct { unsigned char score : 1; unsigned char category : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) double score;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (nonatomic) BOOL hasCategory;
@property (nonatomic) unsigned int category;

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
