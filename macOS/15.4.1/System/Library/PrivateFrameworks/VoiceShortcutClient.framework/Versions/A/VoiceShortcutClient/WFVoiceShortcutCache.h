@class NSArray, NSMutableArray;

@interface WFVoiceShortcutCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy, nonatomic) NSArray *voiceShortcuts;
@property (readonly, copy, nonatomic) NSMutableArray *waitingFetchRequests;
@property (readonly, nonatomic) unsigned long long state;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (void)databaseDidChange;
- (void)getCachedVoiceShortcuts:(id /* block */)a0;
- (void)registerForDatabaseNotifications;
- (void)setCachedVoiceShortcuts:(id /* block */)a0;
- (void)unregisterFromDatabaseNotifications;

@end
