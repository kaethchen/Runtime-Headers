@class NSString;

@interface COMAPPLEFELDSPARPROTOCOLScoredTagID : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *tagId;
@property (nonatomic) float score;

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
