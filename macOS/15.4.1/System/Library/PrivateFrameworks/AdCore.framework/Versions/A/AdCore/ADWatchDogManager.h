@class NSNumber, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ADWatchDogManager : ADSingleton {
    NSObject<OS_dispatch_queue> *_watchdogQueue;
}

@property (retain, nonatomic) NSNumber *currentToken;
@property (readonly, nonatomic) NSMutableDictionary *tokenCollection;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)createNewWatchdog:(id)a0 withTimer:(unsigned long long)a1;
- (void)incrementToken;
- (BOOL)removeWatchdogWithToken:(id)a0;
- (id)getNextToken;
- (void)simulateCrash:(id)a0 becauseOf:(unsigned long long)a1 actuallyTook:(double)a2;
- (BOOL)updateReason:(id)a0 forToken:(id)a1;

@end
