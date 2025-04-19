@class NSString, NSMutableDictionary, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface _ATXAppDailyDoseCurrentStore : NSObject {
    NSString *_path;
    NSObject<OS_dispatch_queue> *_queue;
    _Atomic int _fd;
    NSMutableDictionary *_cache;
    NSDate *_expires;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (void)closePermanently;
- (void)_openFd;
- (double)currentDoseFor:(id)a0;
- (id)_getCacheFromFile;
- (void)_overwrite;
- (void)_readCacheAndExpiration;
- (void)increaseDoseFor:(id)a0 by:(double)a1;
- (BOOL)isExpiredAt:(id)a0;
- (BOOL)isExpiredNow;
- (void)resetWithDurationMap:(id)a0 on:(id)a1;

@end
