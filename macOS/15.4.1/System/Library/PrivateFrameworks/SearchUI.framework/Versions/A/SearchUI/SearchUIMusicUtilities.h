@class NSError, SFMediaMetadata;

@interface SearchUIMusicUtilities : NSObject

+ (void)canPlayAppleMusicWithCompletionHandler:(void (^)(BOOL, NSError *))a0;
+ (void)playMusicItemWithMediaMetadata:(SFMediaMetadata *)a0 completionHandler:(void (^)(NSError *))a1;

- (id)init;

@end
