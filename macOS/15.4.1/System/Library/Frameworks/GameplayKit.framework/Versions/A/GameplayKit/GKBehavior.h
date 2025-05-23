@class NSMutableArray;

@interface GKBehavior : NSObject <NSFastEnumeration, NSCopying> {
    NSMutableArray *_goals;
    NSMutableArray *_weights;
}

@property (readonly) long long goalCount;

+ (id)behaviorWithGoal:(id)a0 weight:(float)a1;
+ (id)behaviorWithGoals:(id)a0;
+ (id)behaviorWithGoals:(id)a0 andWeights:(id)a1;
+ (id)behaviorWithWeightedGoals:(id)a0;

- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)weights;
- (void /* unknown type, empty encoding */)getTotalForce:(double)a0 agent:(id)a1;
- (id)goals;
- (id)initWithGoal:(id)a0 weight:(float)a1;
- (id)initWithGoals:(id)a0;
- (id)initWithGoals:(id)a0 andWeights:(id)a1;
- (id)initWithWeightedGoals:(id)a0;
- (void)removeAllGoals;
- (void)removeGoal:(id)a0;
- (void)setWeight:(float)a0 forGoal:(id)a1;
- (float)weightForGoal:(id)a0;

@end
