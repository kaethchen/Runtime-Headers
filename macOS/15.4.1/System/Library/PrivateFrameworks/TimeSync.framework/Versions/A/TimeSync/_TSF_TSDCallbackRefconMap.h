@class NSMutableDictionary;

@interface _TSF_TSDCallbackRefconMap : NSObject {
    NSMutableDictionary *_refcons;
    unsigned long long _nextRefcon;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)sharedTSDCallbackRefconMap;

- (id)init;
- (void).cxx_destruct;
- (id)getObject:(unsigned long long)a0;
- (unsigned long long)allocateRefcon:(id)a0;
- (void)releaseRefcon:(unsigned long long)a0;

@end
