@class NSMutableDictionary, NSMutableSet;

@interface MPSetPlaybackQueueCommand : MPRemoteCommand {
    NSMutableDictionary *_registeredSpecializedQueues;
    NSMutableSet *_registeredQueueTypes;
    NSMutableSet *_registeredCustomQueueIdentifiers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (nonatomic) long long upNextItemCount;

- (void).cxx_destruct;
- (id)initWithMediaRemoteCommandType:(unsigned int)a0;
- (id)_mediaRemoteCommandInfoOptions;
- (void)registerSpecializedQueueIdentifier:(id)a0 localizedName:(id)a1 queueType:(long long)a2 queueParameters:(id)a3;
- (void)registerSupportedCustomQueueIdentifier:(id)a0;
- (void)registerSupportedQueueType:(long long)a0;
- (void)unregisterSpecializedQueueIdentifier:(id)a0;
- (void)unregisterSupportedCustomQueueIdentifier:(id)a0;
- (void)unregisterSupportedQueueType:(long long)a0;

@end
