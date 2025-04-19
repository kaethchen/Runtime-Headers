@class NSDictionary;

@interface APUniversalSingleton : NSObject

@property (retain, nonatomic) NSDictionary *singletons;

+ (id)sharedInstance;
+ (BOOL)isSingletonSet;
+ (void)resetSingleton;

- (void)forwardInvocation:(id)a0;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)_setValue:(id)a0 forSingletonKey:(id)a1;
- (id)_valueForSingletonKey:(id)a0;

@end
