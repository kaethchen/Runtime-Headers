@class NSMutableSet, NSRecursiveLock;

@interface CUTTelephonyManager : NSObject

@property (nonatomic) BOOL registered;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSMutableSet *disableFastDormancyTokens;
@property (readonly, nonatomic) BOOL disableFastDormancy;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeFastDormancyDisableToken:(id)a0;
- (void)__adjustFastDormancyTokens;
- (void)_adjustFastDormancyTokens;
- (void)_setFastDormancySuspended:(BOOL)a0;
- (void)addFastDormancyDisableToken:(id)a0;

@end
