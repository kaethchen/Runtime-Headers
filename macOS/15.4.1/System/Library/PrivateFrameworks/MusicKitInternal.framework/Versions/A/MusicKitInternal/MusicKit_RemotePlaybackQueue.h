@interface MusicKit_RemotePlaybackQueue : NSObject

@property (nonatomic) long long replaceQueueIntent;

+ (id)extractDialogFromCommandResult:(id)a0 error:(id *)a1;

- (id)initWithReplaceQueueIntent:(long long)a0;
- (id)mrPlayerPathFromPlaybackPath:(id)a0 error:(id *)a1;
- (int)mrReplaceIntentFromMusicKitReplaceQueueIntent:(long long)a0;

@end
