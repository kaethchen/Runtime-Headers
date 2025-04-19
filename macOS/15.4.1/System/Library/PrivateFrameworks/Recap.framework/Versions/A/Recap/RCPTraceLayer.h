@class RCPEventStream;

@interface RCPTraceLayer : CALayer

@property (retain, nonatomic) RCPEventStream *eventStream;
@property (nonatomic) unsigned long long time;
@property (nonatomic) long long interfaceOrientation;

- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext { } *)a0;

@end
