@class PGGraphNode, PGGraphSocialGroupNode;
@protocol PGSocialGroupMember;

@interface PGGraphBelongsToEdge : PGGraphOptimizedEdge

@property (readonly) double importance;
@property (readonly) PGGraphNode<PGSocialGroupMember> *memberNode;
@property (readonly) PGGraphSocialGroupNode *socialGroupNode;

+ (id)filter;
+ (void)setImportance:(double)a0 onBelongsToEdgeForIdentifier:(unsigned long long)a1 inGraph:(id)a2;

- (unsigned short)domain;
- (id)label;
- (BOOL)hasProperties:(id)a0;
- (id)edgeDescription;
- (id)initFromMemberNode:(id)a0 toSocialGroupNode:(id)a1 importance:(double)a2;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;
- (id)propertyDictionary;

@end
