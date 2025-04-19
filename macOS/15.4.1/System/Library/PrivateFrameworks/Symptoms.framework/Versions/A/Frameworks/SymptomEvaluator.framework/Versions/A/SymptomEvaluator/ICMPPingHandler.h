@class NSString;

@interface ICMPPingHandler : NSObject <ICMPPingProbeDelegate>

@property (copy, nonatomic) id /* block */ replyBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)icmpPingProbe:(id)a0 completedIterations:(unsigned long long)a1 successfulCount:(unsigned long long)a2 withError:(id)a3;
- (void)icmpPingProbe:(id)a0 echoRequestSent:(id)a1 success:(BOOL)a2;

@end
