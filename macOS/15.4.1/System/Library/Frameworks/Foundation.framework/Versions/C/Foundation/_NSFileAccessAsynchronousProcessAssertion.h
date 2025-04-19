@class NSString, BKSProcessAssertion;

@interface _NSFileAccessAsynchronousProcessAssertion : NSObject {
    NSString *_name;
    BKSProcessAssertion *_assertion;
}

@property (readonly) int PID;

- (void)dealloc;
- (void)invalidate;
- (void)beginAssertion;
- (id)initWithPID:(int)a0 name:(id)a1;

@end
