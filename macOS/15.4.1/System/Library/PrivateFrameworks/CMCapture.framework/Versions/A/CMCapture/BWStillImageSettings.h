@class BWStillImageCaptureSettings, BWStillImageProcessingSettings, FigCaptureStillImageSettings;

@interface BWStillImageSettings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long settingsID;
@property (readonly, nonatomic) FigCaptureStillImageSettings *requestedSettings;
@property (readonly, nonatomic) BWStillImageCaptureSettings *captureSettings;
@property (readonly, nonatomic) BWStillImageProcessingSettings *processingSettings;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRequestedSettings:(id)a0 captureSettings:(id)a1 processingSettings:(id)a2;

@end
