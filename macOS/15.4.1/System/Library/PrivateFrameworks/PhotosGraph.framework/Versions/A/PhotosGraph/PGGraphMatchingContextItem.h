@class PGGraphNode, NSSet, NSDate;

@interface PGGraphMatchingContextItem : NSObject

@property (readonly, nonatomic) PGGraphNode *referenceNode;
@property (readonly, nonatomic) PGGraphNode *matchedNode;
@property (readonly, nonatomic) NSSet *contextNodes;
@property (readonly, nonatomic) unsigned long long relatedType;
@property (nonatomic) double score;
@property (nonatomic) unsigned long long criteria;
@property (readonly, nonatomic) NSDate *localStartDate;
@property (readonly, nonatomic) NSDate *localEndDate;

+ (unsigned long long)criteriaForLocationLabel:(id)a0;

- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_findLocalStartAndEndDate;
- (id)_matchedAddressNode;
- (id)initWithRelatedType:(unsigned long long)a0 score:(double)a1 criteria:(unsigned long long)a2 referenceNode:(id)a3 matchedNode:(id)a4 contextNodes:(id)a5;
- (BOOL)isEqualToContextItem:(id)a0;

@end
