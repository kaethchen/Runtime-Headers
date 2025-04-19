@class NSString;

@interface HIRunLoopSemaphore : NSObject {
    unsigned char _waiting : 1;
    unsigned char _waited : 1;
    unsigned char _signaled : 1;
    unsigned char _stopped : 1;
    unsigned char _legacyWake : 1;
}

@property (readonly) struct __CFString { } *mode;
@property (copy) NSString *legend;

+ (void)initialize;
+ (id)_invocations;
+ (void)_observe:(struct __CFString { } *)a0 whilePerforming:(id /* block */)a1;

- (void)dealloc;
- (id)init;
- (void)signal;
- (void)wait;
- (BOOL)wait:(double)a0;
- (id)initWithMode:(struct __CFString { } *)a0;
- (void)invokeLoopInModeForDuration:(double)a0 withBlock:(id /* block */)a1;
- (void)setLegacyWake;

@end
