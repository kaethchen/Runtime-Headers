@interface AVCompositionFormatReaderInspector : AVFormatReaderInspector

- (BOOL)isReadable;
- (BOOL)isCompatibleWithAirPlayVideo;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isComposable;
- (BOOL)isExportable;
- (BOOL)isPlayable;

@end
