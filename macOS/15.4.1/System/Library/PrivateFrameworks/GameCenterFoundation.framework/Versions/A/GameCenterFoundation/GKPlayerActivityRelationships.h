@class NSArray;

@interface GKPlayerActivityRelationships : GKInternalRepresentation

@property (retain, nonatomic) NSArray *players;
@property (retain, nonatomic) NSArray *games;
@property (retain, nonatomic) NSArray *leaderboards;
@property (retain, nonatomic) NSArray *achievements;

+ (id)secureCodedPropertyKeys;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
