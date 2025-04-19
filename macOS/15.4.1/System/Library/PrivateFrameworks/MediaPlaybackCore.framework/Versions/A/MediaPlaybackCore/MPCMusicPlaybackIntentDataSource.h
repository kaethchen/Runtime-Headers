@class NSString;

@interface MPCMusicPlaybackIntentDataSource : NSObject <MPCPlaybackIntentDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isValidInsertionIntent:(id)a0 atPosition:(int)a1 forDestination:(long long)a2 supportedQueueTypes:(unsigned long long)a3 supportedCustomDataQueueIdentifiers:(id)a4;
+ (BOOL)isValidReplaceIntent:(id)a0 forDestination:(long long)a1 supportedQueueTypes:(unsigned long long)a2 supportedCustomDataQueueIdentifiers:(id)a3;

- (void)_getPlaybackContextForIntent:(id)a0 withCompletion:(id /* block */)a1;
- (void)getArchiveFromIntent:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (void)getRemotePlaybackQueueFromIntent:(id)a0 destination:(long long)a1 completion:(id /* block */)a2;
- (void)getRepresentativeObjectFromIntent:(id)a0 properties:(id)a1 completion:(id /* block */)a2;
- (void)getSharedListeningTracklistFromIntent:(id)a0 withCompletion:(id /* block */)a1;

@end
