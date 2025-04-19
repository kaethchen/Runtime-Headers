@class NSSet;

@interface PGGraphSocialGroupsDeletion : PGGraphChange

@property (readonly, nonatomic) NSSet *socialGroupUUIDs;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)changeCount;
- (unsigned long long)type;
- (id)initWithSocialGroupUUIDs:(id)a0;

@end
