@interface MPCPodcastsPlaybackIntentDataSource : NSObject <MPCPlaybackIntentDataSource>

+ (BOOL)isValidInsertionIntent:(id)a0 atPosition:(int)a1 forDestination:(long long)a2 supportedQueueTypes:(unsigned long long)a3 supportedCustomDataQueueIdentifiers:(id)a4;
+ (BOOL)isValidReplaceIntent:(id)a0 forDestination:(long long)a1 supportedQueueTypes:(unsigned long long)a2 supportedCustomDataQueueIdentifiers:(id)a3;

- (id)init;
- (void)getRemotePlaybackQueueFromIntent:(id)a0 destination:(long long)a1 completion:(id /* block */)a2;
- (void)getSharedListeningTracklistFromIntent:(id)a0 withCompletion:(id /* block */)a1;

@end
