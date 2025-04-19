@class NSObject;

@interface NSVBObjectDeallocationCanary : NSObject {
    NSObject *_object;
}

+ (unsigned char)actions;
+ (void)_logDeallocation:(id)a0 withCallStackSymbols:(BOOL)a1;
+ (void)attachCanaryToObject:(id)a0;

- (void)dealloc;
- (id)init;
- (id)retain;
- (id)_initForObject:(id)a0;
- (void)_dealloc:(id)a0;
- (void)_logDeallocation:(id)a0 withCallStackSymbols:(BOOL)a1;

@end
