@class MCActivityMonitor;
@protocol MCActivityTarget;

@interface MCMonitoredInvocation : MCQOSInvocation {
    MCActivityMonitor *_monitor;
}

@property (retain, nonatomic) MCActivityMonitor *monitor;
@property (weak) id<MCActivityTarget> target;

+ (id)invocationWithSelector:(SEL)a0 target:(id)a1 taskName:(id)a2 priority:(unsigned char)a3 canBeCancelled:(BOOL)a4;
+ (id)invocationWithSelector:(SEL)a0 target:(id)a1;
+ (id)invocationWithSelector:(SEL)a0 target:(id)a1 object1:(id)a2 object2:(id)a3 object3:(id)a4;
+ (id)invocationWithSelector:(SEL)a0 target:(id)a1 object1:(id)a2 object2:(id)a3 object3:(id)a4 object4:(id)a5;
+ (id)invocationWithSelector:(SEL)a0 target:(id)a1 object1:(id)a2 object2:(id)a3 taskName:(id)a4 priority:(unsigned char)a5 canBeCancelled:(BOOL)a6;
+ (id)invocationWithSelector:(SEL)a0 target:(id)a1 object:(id)a2;
+ (id)invocationWithSelector:(SEL)a0 target:(id)a1 object:(id)a2 taskName:(id)a3 priority:(unsigned char)a4 canBeCancelled:(BOOL)a5;
+ (id)invocationWithSelector:(SEL)a0 target:(id)a1 object1:(id)a2 object2:(id)a3;
+ (id)invocationWithSelector:(SEL)a0 target:(id)a1 object1:(id)a2 object2:(id)a3 object3:(id)a4 object4:(id)a5 taskName:(id)a6 priority:(unsigned char)a7 canBeCancelled:(BOOL)a8;
+ (id)invocationWithSelector:(SEL)a0 target:(id)a1 object1:(id)a2 object2:(id)a3 object3:(id)a4 taskName:(id)a5 priority:(unsigned char)a6 canBeCancelled:(BOOL)a7;

- (void).cxx_destruct;
- (void)invoke;
- (void)invokeWithTarget:(id)a0;
- (unsigned char)priority;
- (void)setShouldPromptUserOnTermination;

@end
