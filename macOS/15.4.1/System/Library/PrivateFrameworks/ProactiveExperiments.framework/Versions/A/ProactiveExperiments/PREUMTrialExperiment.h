@class NSString;

@interface PREUMTrialExperiment : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasExperimentId;
@property (retain, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) BOOL hasTreatmentId;
@property (retain, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) BOOL hasTreatmentModelName;
@property (retain, nonatomic) NSString *treatmentModelName;

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
