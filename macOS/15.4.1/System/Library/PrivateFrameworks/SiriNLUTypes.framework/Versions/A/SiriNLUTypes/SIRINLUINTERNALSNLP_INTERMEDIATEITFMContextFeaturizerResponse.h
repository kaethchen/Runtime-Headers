@class NSString, SIRINLUINTERNALSNLP_INTERMEDIATEContextFeaturizerResponse;

@interface SIRINLUINTERNALSNLP_INTERMEDIATEITFMContextFeaturizerResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasResponse;
@property (retain, nonatomic) SIRINLUINTERNALSNLP_INTERMEDIATEContextFeaturizerResponse *response;
@property (readonly, nonatomic) BOOL hasModelType;
@property (retain, nonatomic) NSString *modelType;

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
