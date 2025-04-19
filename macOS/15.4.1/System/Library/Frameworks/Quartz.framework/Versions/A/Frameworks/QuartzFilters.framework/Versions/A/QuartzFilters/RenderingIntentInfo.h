@class NSMutableArray;

@interface RenderingIntentInfo : QComponentInfoTuple

@property (retain) NSMutableArray *intentTuples;

- (void)dealloc;
- (id)init;
- (void)reset;

@end
