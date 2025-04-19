@interface AMPDeviceAccessibilityPrefs : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL closedCaptionsSupported;
@property (nonatomic) BOOL isUnsupportedLanguage;
@property (nonatomic) BOOL invertColorsSupported;
@property (nonatomic) BOOL enableVoiceOver;
@property (nonatomic) BOOL enableZoom;
@property (nonatomic) BOOL invertDisplay;
@property (nonatomic) BOOL speakAutofillText;
@property (nonatomic) BOOL useMonoAudio;
@property (nonatomic) BOOL showClosedCaptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
