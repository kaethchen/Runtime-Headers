@class NSString;

@interface AVCaptionConversionAdjustment : NSObject {
    void *_adjustmentInternal;
}

@property (readonly) NSString *adjustmentType;

+ (id)captionConversionAdjustmentWithFigDictionary:(struct __CFDictionary { } *)a0;

@end
