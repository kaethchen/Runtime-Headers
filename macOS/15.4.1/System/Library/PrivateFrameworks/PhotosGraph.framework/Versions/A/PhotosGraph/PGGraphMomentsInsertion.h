@class NSSet;

@interface PGGraphMomentsInsertion : PGGraphChange

@property (readonly, nonatomic) NSSet *momentUUIDs;
@property (readonly, nonatomic) NSSet *moments;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)changeCount;
- (unsigned long long)type;
- (id)initWithMoments:(id)a0;
- (id)initWithMomentUUIDs:(id)a0;

@end
