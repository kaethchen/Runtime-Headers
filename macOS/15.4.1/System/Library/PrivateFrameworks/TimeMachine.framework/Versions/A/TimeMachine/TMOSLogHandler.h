@class NSMutableDictionary, NSObject;
@protocol OS_os_log;

@interface TMOSLogHandler : TMLoggingHandler {
    NSObject<OS_os_log> *_generalLogObject;
    NSMutableDictionary *_categoryLogObjects;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)init;
- (void).cxx_destruct;
- (id)_oslogForCategory:(id)a0;
- (void)handleMessage:(id)a0 forRecord:(id)a1;

@end
