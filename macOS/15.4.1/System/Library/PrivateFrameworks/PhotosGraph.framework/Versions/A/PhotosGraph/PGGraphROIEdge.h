@interface PGGraphROIEdge : PGGraphOptimizedEdge

@property (readonly) double confidence;

+ (id)filter;
+ (id)filterAboveConfidence:(double)a0;
+ (id)filterAboveConfidence:(double)a0 hasLegacyWeights:(BOOL)a1;

- (unsigned short)domain;
- (id)label;
- (BOOL)hasProperties:(id)a0;
- (id)edgeDescription;
- (id)initFromMomentNode:(id)a0 toROINode:(id)a1 confidence:(double)a2;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;
- (id)propertyDictionary;

@end
