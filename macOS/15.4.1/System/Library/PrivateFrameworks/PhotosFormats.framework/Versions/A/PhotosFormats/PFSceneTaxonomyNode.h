@class PFSceneTaxonomy, NSString, NSSet;

@interface PFSceneTaxonomyNode : NSObject {
    void *_nodeRef;
}

@property (readonly) PFSceneTaxonomy *taxonomy;
@property (readonly) unsigned int sceneClassId;
@property (readonly) unsigned long long extendedSceneClassId;
@property (readonly) unsigned long long networkId;
@property (readonly, copy) NSString *name;
@property (readonly, getter=isIndexed) BOOL indexed;
@property (readonly) double searchThreshold;
@property (readonly, getter=searchThreshold) double threshold;
@property (readonly) double highRecallThreshold;
@property (readonly) double highPrecisionThreshold;
@property (readonly) double precision0point6Threshold;
@property (readonly) double f0point5Threshold;
@property (readonly) double f1Threshold;
@property (readonly) double f2Threshold;
@property (readonly) double graphHighPrecisionThreshold;
@property (readonly) double graphHighRecallThreshold;
@property (readonly, copy) NSSet *parents;
@property (readonly, copy) NSSet *children;
@property (readonly, copy) NSSet *detectors;
@property (readonly, getter=isRoot) BOOL root;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)localizedLabel;
- (BOOL)isEqualToNode:(id)a0;
- (id)initWithNodeRef:(void *)a0 taxonomy:(id)a1;
- (id)localizedSynonyms;
- (void)traverse:(long long)a0 visitor:(id /* block */)a1;

@end
