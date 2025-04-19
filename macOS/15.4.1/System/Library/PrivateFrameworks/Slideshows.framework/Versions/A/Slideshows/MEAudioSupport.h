@interface MEAudioSupport : NSObject

+ (void)_addAudioPlaylistsFromPlug:(id)a0 toComposition:(id)a1 atTime:(double)a2 forTotalDuration:(double)a3 withID:(id)a4 forExport:(BOOL)a5 fadingTimVols:(id)a6 duckingTimVols:(id)a7 assetManagementDelegate:(id)a8;
+ (BOOL)_getShowTime:(double *)a0 andShowDuration:(double *)a1 forPlug:(id)a2 andSlideIndex:(unsigned long long)a3;
+ (id)_insertAudioTracksFromAsset:(id)a0 toComposition:(id)a1 atTime:(double)a2 withSongStartTime:(double)a3 songDuration:(double)a4;
+ (id)_makeAVAudioMixForComposition:(id)a0 withDuration:(double)a1 andFadeOutDuration:(double)a2 fadingInfos:(id)a3 duckingInfos:(id)a4;
+ (id)compositionForExportForStartTime:(double)a0 andDuration:(double)a1 withDocument:(id)a2 forExport:(BOOL)a3 audioMix:(id *)a4;

@end
