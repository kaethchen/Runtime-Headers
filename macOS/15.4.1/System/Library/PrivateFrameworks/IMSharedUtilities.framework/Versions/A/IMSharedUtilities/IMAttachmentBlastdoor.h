@interface IMAttachmentBlastdoor : NSObject

+ (id)logger;
+ (id)blastdoorInterfaceForSenderContext:(id)a0;
+ (void)defuseBalloonPluginPayloadData:(id)a0 senderContext:(id)a1 withBundleIdentifier:(id)a2 completionBlock:(id /* block */)a3;
+ (void)generateAnimatedImagePreview:(id)a0 senderContext:(id)a1 destinationFileURL:(id)a2 maxPixelDimension:(double)a3 scale:(double)a4 maxFrameCount:(long long)a5 isSticker:(BOOL)a6 withCompletionBlock:(id /* block */)a7;
+ (void)generateAnimatedImagePreview:(id)a0 senderContext:(id)a1 maxPixelDimension:(double)a2 index:(long long)a3 maxCount:(long long)a4 withCompletionBlock:(id /* block */)a5;
+ (void)generateAudioPreview:(id)a0 senderContext:(id)a1 withCompletionBlock:(id /* block */)a2;
+ (void)generateEmojiImagePreview:(id)a0 senderContext:(id)a1 frameIndex:(long long)a2 maxPixelDimension:(double)a3 withCompletionBlock:(id /* block */)a4;
+ (id)generateImagePreviewForFileURL:(id)a0 senderContext:(id)a1 maxPixelDimension:(float)a2 scale:(float)a3 error:(id *)a4;
+ (void)generateMoviePreview:(id)a0 senderContext:(id)a1 maxPxWidth:(double)a2 minThumbnailPxSize:(struct CGSize { double x0; double x1; })a3 scale:(double)a4 withCompletionBlock:(id /* block */)a5;
+ (void)generateNickname:(id)a0 senderContext:(id)a1 forRecordID:(id)a2 wallpaperDataTag:(id)a3 wallpaperLowResDataTag:(id)a4 wallpaperMetadataTag:(id)a5 withKey:(id)a6 processImageFields:(BOOL)a7 completionBlock:(id /* block */)a8;
+ (void)generatePassPreview:(id)a0 senderContext:(id)a1 withCompletionBlock:(id /* block */)a2;
+ (void)generatePreview:(id)a0 senderContext:(id)a1 maxPxWidth:(double)a2 scale:(double)a3 withCompletionBlock:(id /* block */)a4;
+ (void)generateWorkoutPreview:(id)a0 senderContext:(id)a1 maxPxWidth:(double)a2 scale:(double)a3 withCompletionBlock:(id /* block */)a4;
+ (void)getMetadataForAnimatedImage:(id)a0 senderContext:(id)a1 maxCount:(long long)a2 withCompletionBlock:(id /* block */)a3;
+ (void)getMetadataForEmojiImageWithFileURL:(id)a0 senderContext:(id)a1 maxStrikeCount:(long long)a2 withCompletionBlock:(id /* block */)a3;
+ (void)sendBalloonPluginPayloadData:(id)a0 senderContext:(id)a1 withBundleIdentifier:(id)a2 completionBlock:(id /* block */)a3;
+ (void)sendData:(id)a0 senderContext:(id)a1 forPreviewType:(unsigned char)a2 withCompletionBlock:(id /* block */)a3;
+ (BOOL)supportsFeature:(id)a0;

@end
