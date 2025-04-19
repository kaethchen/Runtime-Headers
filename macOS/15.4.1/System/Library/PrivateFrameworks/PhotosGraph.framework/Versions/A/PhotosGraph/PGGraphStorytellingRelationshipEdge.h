@class NSString;

@interface PGGraphStorytellingRelationshipEdge : PGGraphPropertylessEdge

@property (readonly, nonatomic) NSString *relationship;

+ (id)filter;
+ (id)reducedRelationshipNameForLabels:(id)a0;
+ (id)relationshipNameForLabel:(id)a0;

- (void).cxx_destruct;
- (unsigned short)domain;
- (id)label;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;
- (id)initWithRelationship:(id)a0 fromMeNode:(id)a1 toPersonNode:(id)a2;

@end
