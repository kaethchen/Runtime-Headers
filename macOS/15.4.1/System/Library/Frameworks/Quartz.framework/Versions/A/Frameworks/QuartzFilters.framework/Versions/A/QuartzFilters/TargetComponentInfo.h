@class NSArray, NSMutableArray;

@interface TargetComponentInfo : QComponentInfoTuple

@property (retain) NSArray *targetNames;
@property (retain) NSMutableArray *profileTuples;

- (void)dealloc;
- (id)init;
- (void)reset;

@end
