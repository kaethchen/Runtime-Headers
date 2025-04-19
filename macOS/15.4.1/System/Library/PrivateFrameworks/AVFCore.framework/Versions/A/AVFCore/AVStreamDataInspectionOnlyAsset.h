@interface AVStreamDataInspectionOnlyAsset : AVURLAsset

- (BOOL)isReadable;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0;
- (BOOL)isCompatibleWithAirPlayVideo;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isComposable;
- (BOOL)isExportable;
- (BOOL)isPlayable;

@end
