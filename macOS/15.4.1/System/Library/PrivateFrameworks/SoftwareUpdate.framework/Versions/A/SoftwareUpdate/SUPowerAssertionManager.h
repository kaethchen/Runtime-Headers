@class NSMutableDictionary;

@interface SUPowerAssertionManager : NSObject {
    NSMutableDictionary *_assertionDict;
}

- (void)dealloc;
- (id)init;
- (void)cancelPowerAssertionWithDescription:(id)a0;
- (void)createPowerAssertionWithDescription:(id)a0;
- (void)createPowerAssertionWithType:(struct __CFString { } *)a0 timeout:(double)a1 andDescription:(id)a2;
- (void)createUserActivityAssertionWithDescription:(id)a0 timeout:(double)a1;

@end
