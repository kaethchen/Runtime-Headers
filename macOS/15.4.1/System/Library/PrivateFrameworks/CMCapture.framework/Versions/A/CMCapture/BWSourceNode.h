@interface BWSourceNode : BWNode

@property (readonly, nonatomic) struct OpaqueCMClock { } *clock;

- (BOOL)start:(id *)a0;
- (BOOL)stop:(id *)a0;
- (id)nodeType;
- (void)makeOutputsLiveIfNeeded;

@end
