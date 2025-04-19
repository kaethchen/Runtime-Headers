@class NSString, AVCaptionConversionAdjustment;

@interface AVCaptionConversionWarning : NSObject {
    void *_warningInternal;
}

@property (readonly) NSString *warningType;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } rangeOfCaptions;
@property (readonly) AVCaptionConversionAdjustment *adjustment;

+ (id)captionConversionWarningWithFigDictionary:(struct __CFDictionary { } *)a0;

- (void)dealloc;
- (id)description;
- (id)initWithFigDictionary:(struct __CFDictionary { } *)a0;

@end
