@class NSString, ADRotatingIdentifiers, ADUserTargetingProperties;

@interface ADSponsoredSearchRequest : PBRequest <NSCopying> {
    struct { unsigned char supportedODMLVersion : 1; unsigned char clientExclusive : 1; unsigned char enableImagesForDupes : 1; unsigned char inAllocation : 1; unsigned char isBaseline : 1; unsigned char isTest : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasProperties;
@property (retain, nonatomic) ADUserTargetingProperties *properties;
@property (nonatomic) BOOL hasIsTest;
@property (nonatomic) BOOL isTest;
@property (nonatomic) BOOL hasIsBaseline;
@property (nonatomic) BOOL isBaseline;
@property (nonatomic) BOOL hasEnableImagesForDupes;
@property (nonatomic) BOOL enableImagesForDupes;
@property (nonatomic) BOOL hasSupportedODMLVersion;
@property (nonatomic) int supportedODMLVersion;
@property (readonly, nonatomic) BOOL hasExperimentID;
@property (retain, nonatomic) NSString *experimentID;
@property (readonly, nonatomic) BOOL hasTreatmentID;
@property (retain, nonatomic) NSString *treatmentID;
@property (readonly, nonatomic) BOOL hasDeploymentID;
@property (retain, nonatomic) NSString *deploymentID;
@property (nonatomic) BOOL hasInAllocation;
@property (nonatomic) BOOL inAllocation;
@property (nonatomic) BOOL hasClientExclusive;
@property (nonatomic) BOOL clientExclusive;
@property (readonly, nonatomic) BOOL hasRotatingIdentifiers;
@property (retain, nonatomic) ADRotatingIdentifiers *rotatingIdentifiers;

+ (id)options;

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
