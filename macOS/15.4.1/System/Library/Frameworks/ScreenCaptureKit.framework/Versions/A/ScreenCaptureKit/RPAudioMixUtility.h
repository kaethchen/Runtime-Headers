@interface RPAudioMixUtility : NSObject

+ (id)exportPresetForAVAsset:(id)a0;
+ (void)mixAudioForMovie:(id)a0 finalMovieURL:(id)a1 outputFileType:(id)a2 withCompletionHandler:(id /* block */)a3;
+ (void)mixAudioForMovie:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (id)tempFileURL;
+ (id)videoCodecTypeForAVAsset:(id)a0;

@end
