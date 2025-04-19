@class NSArray, NSMutableArray;

@interface IntermediateComponentInfo : QComponentInfoTuple

@property (retain) NSArray *midNames;
@property (retain) NSMutableArray *intermediateTuples;

- (void)dealloc;
- (id)init;
- (void)reset;

@end
