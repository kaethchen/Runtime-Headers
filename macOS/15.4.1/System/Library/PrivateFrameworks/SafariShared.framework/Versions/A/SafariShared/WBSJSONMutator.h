@class NSSet;

@interface WBSJSONMutator : NSObject {
    id _originalJSONSource;
    NSSet *_protectedFields;
}

@property (nonatomic) double fieldDeletionProbability;
@property (nonatomic) double fieldValueChangeProbability;
@property (nonatomic) double fieldTypeChangeProbability;
@property (nonatomic) double collectionFieldSkewFactorToDecreaseProbabilityOfInvalidResults;

- (void).cxx_destruct;
- (id)initWithSource:(id)a0 protectedFields:(id)a1;
- (long long)_actionToPerformOnFieldOfType:(long long)a0;
- (id)_mutatedArrayField:(id)a0 shouldProtectRootObject:(BOOL)a1;
- (id)_mutatedCollectionField:(id)a0;
- (id)_mutatedDictionaryField:(id)a0 shouldProtectRootObject:(BOOL)a1;
- (id)_randomDateGenerator;
- (id)_randomFieldTypeChanger;
- (id)_randomIntegerGenerator;
- (id)_randomNumberGenerator;
- (id)_randomStringGenerator;
- (id)_randomValueForField:(id)a0;
- (id)mutatedJSONProtectingRootObject:(BOOL)a0;

@end
