@class NSArray, AVCapturePhotoBracketSettingsInternal_Tundra;

@interface AVCapturePhotoBracketSettings_Tundra : AVCapturePhotoSettings_Tundra {
    AVCapturePhotoBracketSettingsInternal_Tundra *_bracketSettingsInternal;
}

@property (readonly, nonatomic) NSArray *bracketedSettings;
@property (nonatomic, getter=isLensStabilizationEnabled) BOOL lensStabilizationEnabled;

+ (id)photoBracketSettingsWithRawPixelFormatType:(unsigned int)a0 processedFormat:(id)a1 bracketedSettings:(id)a2;
+ (id)photoBracketSettingsWithRawPixelFormatType:(unsigned int)a0 rawFileType:(id)a1 processedFormat:(id)a2 processedFileType:(id)a3 bracketedSettings:(id)a4;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;

@end
