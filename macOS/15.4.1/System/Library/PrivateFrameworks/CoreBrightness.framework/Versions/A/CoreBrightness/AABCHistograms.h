@class CBHistogramBuilder;

@interface AABCHistograms : NSObject

@property (readonly) CBHistogramBuilder *L;
@property (readonly) CBHistogramBuilder *LOff;
@property (readonly) CBHistogramBuilder *LDevice;
@property (readonly) CBHistogramBuilder *LDeviceOff;
@property (readonly) CBHistogramBuilder *LLPM;
@property (readonly) CBHistogramBuilder *L_EDR;
@property (readonly) CBHistogramBuilder *LOff_EDR;
@property (readonly) CBHistogramBuilder *LDevice_EDR;
@property (readonly) CBHistogramBuilder *LDeviceOff_EDR;
@property (readonly) CBHistogramBuilder *LLPM_EDR;
@property (readonly) CBHistogramBuilder *E;
@property float lastBrightnessUpdateTimestamp;
@property float lastBrightnessUpdateNits;
@property float lastBrightnessUpdateNitsEDR;
@property BOOL firstBrightnessUpdate;
@property BOOL autoBrightnessOn;
@property BOOL ecoModeOn;
@property BOOL builtInDisplay;

- (void)dealloc;
- (id)init;
- (void)luminanceHistLogNitsSDR:(float)a0 andNitsEDR:(float)a1;
- (void)submit;

@end
