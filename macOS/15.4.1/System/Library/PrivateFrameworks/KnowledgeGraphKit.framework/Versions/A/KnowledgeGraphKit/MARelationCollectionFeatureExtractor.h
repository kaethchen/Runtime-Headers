@class NSString, MAIndexCache, MARelation;

@interface MARelationCollectionFeatureExtractor : MAFeatureExtractor {
    NSString *_name;
}

@property (readonly, nonatomic) MAIndexCache *featureNameIndexCache;
@property (readonly, nonatomic) MARelation *relation;
@property (readonly, nonatomic) id /* block */ labelForTargetBlock;
@property (readonly, nonatomic) NSString *labelForEmptyRelation;

- (id)name;
- (void).cxx_destruct;
- (id)featureNames;
- (id)floatMatrixWithEntities:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (id)initWithName:(id)a0 featureNames:(id)a1 relation:(id)a2 labelForEmptyRelation:(id)a3 labelForTargetBlock:(id /* block */)a4;
- (id)initWithName:(id)a0 featureNames:(id)a1 relation:(id)a2 labelForTargetBlock:(id /* block */)a3;

@end
