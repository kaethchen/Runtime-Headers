@class NSArray;

@interface AVCaptionConversionValidator : NSObject {
    void *_validatorInternal;
}

@property (readonly) long long status;
@property (readonly) NSArray *captions;
@property (readonly) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (readonly) NSArray *warnings;

+ (id)captionConversionValidatorWithCaptions:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 conversionSettings:(id)a2;
+ (id)mutableCaptionArray;

- (void)dealloc;
- (void)_completeValidation;
- (BOOL)_isConversionToClosedCaptions:(id)a0;
- (void)_issueWarningForFigDictionary:(struct __CFDictionary { } *)a0;
- (id)initWithCaptions:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 conversionSettings:(id)a2;
- (void)stopValidating;
- (void)validateCaptionConversionWithWarningHandler:(id /* block */)a0;

@end
