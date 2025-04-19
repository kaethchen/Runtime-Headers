@class UIUDetectorCompat;

@interface UIUDetector : NSObject

@property (readonly) UIUDetectorCompat *underlyingObject;

+ (long long)convertPlatform:(long long)a0;
+ (float)defaultIOUThreshold;

- (void).cxx_destruct;
- (id)getDetectionsInScreen:(struct CGImage { } *)a0 addOCR:(BOOL)a1 addIcons:(BOOL)a2 addClickability:(BOOL)a3 addFocusElements:(BOOL)a4 nmsThreshold:(float)a5 useAccurateOCR:(BOOL)a6 error:(id *)a7;
- (id)initForPlatform:(long long)a0;
- (id)initForPlatform:(long long)a0 elementConfidence:(id)a1 clickabilityConfidence:(id)a2 elementConfig:(id)a3 clickabilityConfig:(id)a4;

@end
