@class NSString, NSMutableDictionary, NSObject;
@protocol OS_os_log;

@interface WFLoggerOsLog : WFLoggerBase {
    struct __CFString { } *_subSystem;
    struct __CFString { } *_category;
    NSObject<OS_os_log> *_osLog;
    NSMutableDictionary *_profileSettings;
    unsigned long long _currentLevel;
    unsigned long long _logLifeSpanInDays;
}

@property (readonly, copy, getter=getProfileFilePath) NSString *profileFilePath;

+ (void)WFLogOsLog:(unsigned long long)a0 cfStrMsg:(struct __CFString { } *)a1;
+ (unsigned char)convertWFLogLevelToOsLogLevel:(unsigned long long)a0;

- (void)dealloc;
- (unsigned long long)mapLogLevelStr:(id)a0;
- (unsigned char)setLevelEnabled:(id)a0 category:(id)a1 value:(id)a2;
- (void)setMaxSizeInKb:(unsigned long long)a0;
- (unsigned char)setLevelPersist:(id)a0 category:(id)a1 value:(id)a2;
- (void)WFLog:(unsigned long long)a0 privacy:(unsigned long long)a1 cfStrMsg:(struct __CFString { } *)a2;
- (void)WFLog:(unsigned long long)a0 privacy:(unsigned long long)a1 message:(const char *)a2 valist:(char *)a3;
- (unsigned char)convertLogLevel:(unsigned long long)a0;
- (void)createOsLogProfile;
- (unsigned char)doesProfileExist:(id)a0;
- (id)formatOsLogProfile:(id)a0 levelEnabled:(id)a1 levelPersist:(id)a2 ttlDays:(id)a3 privacy:(id)a4;
- (id)getLevelEnabled:(id)a0 category:(id)a1;
- (id)getLevelPersist:(id)a0 category:(id)a1;
- (unsigned long long)getLogLevelEnable;
- (unsigned long long)getLogLevelPersist;
- (id)getLogLifespanInDays;
- (unsigned long long)getLogPrivacy;
- (unsigned long long)getMaxFileSizeInMB;
- (id)getPrivacy:(id)a0 category:(id)a1;
- (id)getTtlDays:(id)a0 category:(id)a1;
- (id)init:(id)a0 subSystem:(struct __CFString { } *)a1 category:(struct __CFString { } *)a2 logLifespanInDays:(unsigned long long)a3 logLevel:(unsigned long long)a4 logPrivacy:(unsigned long long)a5 dispatchQueue:(id)a6;
- (id)mapLogLevelEnum:(unsigned long long)a0;
- (void)setLogLevelEnable:(unsigned long long)a0;
- (void)setLogLevelPersist:(unsigned long long)a0;
- (void)setLogLifespanInDays:(id)a0;
- (void)setLogPrivacy:(unsigned long long)a0;
- (unsigned char)setPrivacy:(id)a0 category:(id)a1 value:(id)a2;
- (unsigned char)setTtlDays:(id)a0 category:(id)a1 value:(id)a2;
- (void)stopWatchingLogFile;
- (unsigned char)writeDictToFile:(id)a0 idStr:(id)a1;

@end
