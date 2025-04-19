@class NSArray, VNRequestSpecifier, VNEntityIdentificationModelAlgorithm;

@interface VNEntityIdentificationModelConfiguration : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _maximumEntities;
    unsigned long long _maximumTrainingPrintsPerEntity;
}

@property (class, readonly) unsigned long long maximumAllowableEntities;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) VNEntityIdentificationModelAlgorithm *algorithm;
@property (readonly, copy) VNRequestSpecifier *entityPrintOriginatingRequestSpecifier;
@property (readonly, copy) NSArray *acceptableEntityPrintOriginatingRequestSpecifiers;
@property unsigned long long maximumEntities;
@property unsigned long long maximumTrainingPrintsPerEntity;

+ (unsigned long long)maximumAllowableFaceprintsPerIdentity;
+ (id)newConfigurationForEntityPrintsGeneratedByRequest:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (int)faceIDModelMaximumElementsPerID;
- (id)algorithmOfClass:(Class)a0 error:(id *)a1;
- (int)faceID3IndexMode;
- (int)faceID3ModelMaximumElementsPerID;
- (int)faceID3ModelMaximumIDs;
- (int)faceID3ModelSeed;
- (id)initWithEntityPrintOriginatingRequestSpecifier:(id)a0;
- (id)resolvedAlgorithmAndReturnError:(id *)a0;

@end
