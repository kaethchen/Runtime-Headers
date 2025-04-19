@interface TSUBacktrace : NSObject {
    void **_callstack;
    int _frames;
    int _initAdjustment;
}

+ (id)new;
+ (id)caller;
+ (id)backtrace;
+ (id)callee;

- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)caller;
- (id)backtraceString;
- (id)callee;
- (id)callerAtIndex:(long long)a0;
- (id)initWithAdjustment:(int)a0;

@end
