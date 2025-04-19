@class CLPPrivacySanitization, CLPConsolidation;

@interface CLPLocationProcessingPipelineMetadata : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPrivacySanitization;
@property (retain, nonatomic) CLPPrivacySanitization *privacySanitization;
@property (readonly, nonatomic) BOOL hasConsolidation;
@property (retain, nonatomic) CLPConsolidation *consolidation;

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
