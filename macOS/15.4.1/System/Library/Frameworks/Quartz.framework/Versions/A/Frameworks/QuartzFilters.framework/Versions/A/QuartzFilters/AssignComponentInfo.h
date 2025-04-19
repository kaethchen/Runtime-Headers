@class NSArray, NSMutableArray;

@interface AssignComponentInfo : QComponentInfoTuple

@property (retain) NSArray *grayNames;
@property (retain) NSArray *rgbNames;
@property (retain) NSArray *cmykNames;
@property (retain) NSMutableArray *profileTuples;

- (void)dealloc;
- (id)init;
- (void)reset;
- (void)insertProfileTuples:(id)a0 atIndexes:(id)a1;
- (void)removeProfileTuplesAtIndexes:(id)a0;

@end
