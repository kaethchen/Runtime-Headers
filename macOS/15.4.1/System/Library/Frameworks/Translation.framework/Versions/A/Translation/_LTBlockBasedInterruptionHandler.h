@class NSString;

@interface _LTBlockBasedInterruptionHandler : NSObject <_LTInterruptionObserving>

@property (copy, nonatomic) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)didReceiveInterruptionFromHandler:(id)a0;

@end
