@interface VNPersonsModelFaceModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (BOOL)getStoredRepresentationTag:(unsigned int *)a0 forModelVersion:(unsigned long long)a1 error:(id *)a2;
+ (id)modelBuiltFromConfiguration:(id)a0 dataProvider:(id)a1 canceller:(id)a2 error:(id *)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)faceCountForPersonWithUniqueIdentifier:(id)a0;
- (id)faceCountsForAllPersons;
- (id)faceCountsForPersonsWithUniqueIdentifiers:(id)a0;
- (unsigned long long)faceprintRequestRevision;
- (BOOL)isCompatibleWithConfiguration:(id)a0;
- (unsigned long long)personCount;
- (id)personPredictionsForFace:(id)a0 withDescriptor:(const void *)a1 limit:(unsigned long long)a2 canceller:(id)a3 error:(id *)a4;
- (id)personUniqueIdentifiers;
- (id)trainingFaceprintsForPersonWithUniqueIdentifier:(id)a0 error:(id *)a1;

@end
