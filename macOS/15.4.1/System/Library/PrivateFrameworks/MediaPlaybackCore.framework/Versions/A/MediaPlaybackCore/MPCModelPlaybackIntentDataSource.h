@interface MPCModelPlaybackIntentDataSource : MPCMusicPlaybackIntentDataSource

+ (BOOL)isValidInsertionIntent:(id)a0 atPosition:(int)a1 forDestination:(long long)a2 supportedQueueTypes:(unsigned long long)a3 supportedCustomDataQueueIdentifiers:(id)a4;
+ (BOOL)isValidReplaceIntent:(id)a0 forDestination:(long long)a1 supportedQueueTypes:(unsigned long long)a2 supportedCustomDataQueueIdentifiers:(id)a3;

- (void)_getPlaybackContextForIntent:(id)a0 withCompletion:(id /* block */)a1;

@end
