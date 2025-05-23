@class NSString;

@interface LIGHTHOUSE_BITACORA_PROTOExperimentIdentifiers : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTrialExperimentID;
@property (retain, nonatomic) NSString *trialExperimentID;
@property (readonly, nonatomic) BOOL hasTrialDeploymentID;
@property (retain, nonatomic) NSString *trialDeploymentID;
@property (readonly, nonatomic) BOOL hasTrialTreatmentID;
@property (retain, nonatomic) NSString *trialTreatmentID;

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
