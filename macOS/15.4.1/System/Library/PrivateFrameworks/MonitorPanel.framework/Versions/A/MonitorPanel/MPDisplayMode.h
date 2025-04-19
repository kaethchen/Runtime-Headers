@class NSString, MPDisplay, NSNumber;

@interface MPDisplayMode : NSObject {
    struct _CGSDisplayModeDescription { int displayModeNumber; int flags; int width; int height; int depth; int rowBytes; int bitsPerPixel; int bitsPerSample; int samplesPerPixel; int refreshRate; int horizontalResolution; int verticalResolution; char encoding[129]; int version; int length; int fixPtRefreshRate; int ioModeInfoFlags; int ioDisplayModeNumber; int pixelsWide; int pixelsHigh; float resolution; } _desc;
    NSString *_rateString;
    unsigned int _tvMode;
    BOOL _isVRR;
    BOOL _isProMotion;
}

@property (readonly) MPDisplay *display;
@property (readonly) struct _CGSDisplayModeDescription { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; char x12[129]; int x13; int x14; int x15; int x16; int x17; int x18; int x19; float x20; } *modeDescription;
@property (readonly) NSString *resolutionKey;
@property (readonly) NSString *resolutionString;
@property (readonly) int modeNumber;
@property (readonly) int width;
@property (readonly) int height;
@property (readonly) int pixelsWide;
@property (readonly) int pixelsHigh;
@property (readonly) int horizDPI;
@property (readonly) int vertDPI;
@property (readonly) int dotsPerInch;
@property (readonly) int refreshRate;
@property (readonly) int fixPtRefreshRate;
@property (readonly) float aspectRatio;
@property (readonly) float scale;
@property (readonly) int roundedScanRate;
@property (readonly) NSNumber *scanRate;
@property (readonly) BOOL isHiDPI;
@property (readonly) BOOL isRetina;
@property (readonly) BOOL isUserVisible;
@property (readonly) BOOL isStretched;
@property (readonly) BOOL isDefaultMode;
@property (readonly) BOOL isNativeMode;
@property (readonly) BOOL isInterlaced;
@property (readonly) BOOL isSafeMode;
@property (readonly) BOOL isSimulscan;
@property (readonly) BOOL isTVMode;
@property (readonly) unsigned int tvMode;
@property (readonly) unsigned int tvModeEquiv;
@property (readonly) NSString *refreshString;
@property (readonly) BOOL isProMotion;
@property (readonly) BOOL isVRR;
@property (readonly) float minRefreshRate;

+ (id)modeWithDescription:(struct _CGSDisplayModeDescription { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; char x12[129]; int x13; int x14; int x15; int x16; int x17; int x18; int x19; float x20; } *)a0 forDisplay:(id)a1;

- (void)dealloc;
- (id)description;
- (id)_nonTVKeys;
- (void)getModeDescription:(struct _CGSDisplayModeDescription { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; char x12[129]; int x13; int x14; int x15; int x16; int x17; int x18; int x19; float x20; } *)a0;
- (id)initWithModeDescription:(struct _CGSDisplayModeDescription { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; char x12[129]; int x13; int x14; int x15; int x16; int x17; int x18; int x19; float x20; } *)a0 displayModeIndex:(int)a1 forDisplay:(id)a2;
- (id)initWithModeDescription:(struct _CGSDisplayModeDescription { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; char x12[129]; int x13; int x14; int x15; int x16; int x17; int x18; int x19; float x20; } *)a0 isProMotion:(BOOL)a1 isVRR:(BOOL)a2 minRefreshRate:(float)a3 forDisplay:(id)a4;
- (BOOL)modeResolutionMatches:(id)a0;
- (id)resolutionFormat;
- (id)resolutionKeyFormat;
- (BOOL)resolutionMatches:(struct _CGSDisplayModeDescription { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; char x12[129]; int x13; int x14; int x15; int x16; int x17; int x18; int x19; float x20; } *)a0;

@end
