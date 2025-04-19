@class NSString, NSMutableArray;

@interface GEOAPSequenceState : NSObject {
    BOOL _finished;
    NSMutableArray *_rejectionPairs;
}

@property (readonly, nonatomic) NSString *name;
@property (nonatomic) double startTime;
@property (copy, nonatomic) id /* block */ fulfillmentBlock;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)reset;
- (void)addAbortingUserAction:(int)a0 target:(int)a1;
- (unsigned long long)processUserAction:(int)a0 target:(int)a1 atTime:(double)a2;

@end
