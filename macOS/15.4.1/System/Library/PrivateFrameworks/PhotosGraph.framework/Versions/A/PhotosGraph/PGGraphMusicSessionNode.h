@class NSArray, NSSet, NSDate;

@interface PGGraphMusicSessionNode : PGGraphOptimizedNode

@property (class, readonly, nonatomic) NSArray *musicSessionDateSortDescriptors;

@property (readonly, nonatomic) NSDate *localStartDate;
@property (readonly, nonatomic) NSDate *localEndDate;
@property (readonly, nonatomic) NSSet *trackNodes;

+ (id)momentOfMusicSession;

- (id)description;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)label;
- (BOOL)hasProperties:(id)a0;
- (id)momentNodes;
- (void)enumerateMusicTrackNodesUsingBlock:(id /* block */)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)initWithLocalStartDate:(id)a0 localEndDate:(id)a1;
- (id)propertyDictionary;

@end
