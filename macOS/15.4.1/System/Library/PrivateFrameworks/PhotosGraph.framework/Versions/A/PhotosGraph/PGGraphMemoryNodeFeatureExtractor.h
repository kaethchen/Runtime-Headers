@class NSString;

@interface PGGraphMemoryNodeFeatureExtractor : MARelationCollectionFeatureExtractor <PGGraphFeatureExtractorProtocol>

@property (readonly, nonatomic) unsigned long long featureLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)featureExtractorWithError:(id *)a0;

- (id)initWithError:(id *)a0;
- (id)initWithName:(id)a0 featureNames:(id)a1 relation:(id)a2 labelForTargetBlock:(id /* block */)a3;

@end
