@class NSLock, NSMutableDictionary, NSObject;
@protocol OS_os_log;

@interface PowerUIChargingController : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSMutableDictionary *tokenDict;
@property (retain, nonatomic) NSLock *chargeLimitLock;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)clearAllChargeLimits;
- (void)clearChargeLimitForLimitType:(unsigned long long)a0;
- (struct __CFString { } *)loadChargeLimitTokenForPreferenceKey:(id)a0 forReason:(id)a1;
- (id)readNumberForPreferenceKey:(id)a0;
- (struct __CFString { } *)registerNewTokenForPreferenceKey:(id)a0 forReason:(id)a1;
- (BOOL)setChargeLimitTo:(long long)a0 forLimitType:(unsigned long long)a1;
- (void)setNumber:(id)a0 forPreferenceKey:(id)a1;

@end
