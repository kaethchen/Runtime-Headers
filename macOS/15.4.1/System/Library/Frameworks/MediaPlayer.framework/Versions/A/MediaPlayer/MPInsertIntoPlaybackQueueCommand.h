@class NSArray, NSString, NSMutableSet;

@interface MPInsertIntoPlaybackQueueCommand : MPRemoteCommand {
    NSMutableSet *_registeredQueueTypes;
    NSMutableSet *_registeredCustomQueueIdentifiers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy, nonatomic) NSArray *supportedInsertionPositions;
@property (copy, nonatomic) NSString *lastSectionContentItemID;
@property (copy, nonatomic) NSString *tailInsertionContentItemID;

- (void).cxx_destruct;
- (id)initWithMediaRemoteCommandType:(unsigned int)a0;
- (id)_mediaRemoteCommandInfoOptions;
- (void)registerSupportedCustomQueueIdentifier:(id)a0;
- (void)registerSupportedQueueType:(long long)a0;
- (void)unregisterSupportedCustomQueueIdentifier:(id)a0;
- (void)unregisterSupportedQueueType:(long long)a0;

@end
