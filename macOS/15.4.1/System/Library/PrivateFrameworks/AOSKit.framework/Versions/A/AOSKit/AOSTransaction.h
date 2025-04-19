@class NSConditionLock, NSObject;
@protocol OS_dispatch_queue;

@interface AOSTransaction : NSObject <NSSecureCoding> {
    unsigned char didSucceed;
    unsigned char didFinish;
    void *result;
    struct __CFError { } *error;
    void /* function */ *callbackFunction;
    id /* block */ callbackBlock;
    NSObject<OS_dispatch_queue> *callbackQueue;
    void *context;
    NSConditionLock *waitLock;
    void /* function */ *contextRetain;
    void /* function */ *contextRelease;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)error;
- (id)initWithCoder:(id)a0;
- (id)result;
- (BOOL)isSuccessful;

@end
