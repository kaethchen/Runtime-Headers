@class NSObject;
@protocol OS_dispatch_queue;

@interface CWMessageTracerCache : NSObject {
    struct __SCPreferences { } *_prefs;
    NSObject<OS_dispatch_queue> *_mutex;
}

+ (id)sharedMessageTracerCache;

- (void)dealloc;
- (id)init;
- (void)addInternalMTLogWithAttributes:(id)a0;
- (void)__addMTLogWithAttributes:(id)a0;
- (void)addAssociationMTLogWithAttributes:(id)a0 sampleUsingSSID:(id)a1;
- (void)addInternalAssociationMTLogWithAttributes:(id)a0 sampleUsingSSID:(id)a1;
- (void)addMTLogWithAttributes:(id)a0;

@end
