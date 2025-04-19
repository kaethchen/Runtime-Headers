@interface VUIMetricsMediaEvent : NSObject

+ (id)_convertToMs:(id)a0;
+ (id)_metricsDataFromPlayable:(id)a0 actionType:(id)a1 canonicalIdOverride:(id)a2;
+ (id)_metricsDataFromPlayable:(id)a0 actionType:(id)a1 canonicalIdOverride:(id)a2 position:(id)a3 durationOverride:(id)a4 contentType:(id)a5;
+ (id)_metricsDataFromTVPMediaItem:(id)a0 contentPosition:(id)a1 isBackground:(BOOL)a2 isAmbient:(BOOL)a3 actionType:(id)a4;
+ (id)clickMetricsDataFromTVPMediaItem:(id)a0;
+ (id)clickMetricsDataFromTVPMediaItem:(id)a0 targetType:(id)a1;
+ (id)impressionsMetricsDataFromTVPMediaItem:(id)a0;
+ (void)recordBGVideoPlayOfTVPMediaItem:(id)a0 contentPosition:(id)a1 isAmbient:(BOOL)a2 actionType:(id)a3;
+ (void)recordBGVideoPlayOfTVPMediaItem:(id)a0 isAmbient:(BOOL)a1;
+ (void)recordClickOfSkipInfo:(id)a0 onMediaItem:(id)a1 impressionData:(id)a2;
+ (void)recordClipPlay:(id)a0 canonicalId:(id)a1 position:(id)a2 duration:(double)a3;
+ (void)recordClipStop:(id)a0 canonicalId:(id)a1 position:(id)a2 duration:(double)a3;
+ (void)recordImpressionsOfSkipButton:(id)a0 onMediaItem:(id)a1 skipInfo:(id)a2;
+ (void)recordPlay:(id)a0 isLaunchingExtras:(BOOL)a1;
+ (void)recordPlayOfTVPMediaItem:(id)a0;
+ (void)recordStop:(id)a0;

@end
