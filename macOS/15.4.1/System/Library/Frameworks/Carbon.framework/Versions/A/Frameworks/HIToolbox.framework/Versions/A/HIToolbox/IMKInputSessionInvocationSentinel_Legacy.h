@interface IMKInputSessionInvocationSentinel_Legacy : NSObject {
    long long _int;
}

+ (id)sentinel;

- (void)dealloc;
- (id)init;
- (BOOL)isMarkedDone;
- (void)markDone;

@end
