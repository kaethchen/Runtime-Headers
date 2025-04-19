@class NSSet;

@interface PGGraphSocialGroupsInsertion : PGGraphChange

@property (readonly, nonatomic) NSSet *socialGroupUUIDs;
@property (readonly, nonatomic) NSSet *socialGroups;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)changeCount;
- (unsigned long long)type;
- (id)initWithSocialGroupUUIDs:(id)a0;
- (id)initWithSocialGroups:(id)a0;

@end
