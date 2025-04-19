@interface PGGraphVisualLookupSceneEdge : PGGraphOptimizedEdge {
    unsigned long long _numberOfAssets;
    double _confidence;
}

@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) unsigned long long numberOfAssets;

+ (id)filter;

- (unsigned short)domain;
- (id)label;
- (BOOL)hasProperties:(id)a0;
- (id)initFromMomentNode:(id)a0 toVisualLookupSceneNode:(id)a1 confidence:(double)a2 numberOfAssets:(unsigned long long)a3;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;
- (id)propertyDictionary;

@end
