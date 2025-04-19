@interface UIUDetectorCompat : NSObject {
    void /* unknown type, empty encoding */ modelPlatform;
    void /* unknown type, empty encoding */ grouper;
    void /* unknown type, empty encoding */ elementDetector;
    void /* unknown type, empty encoding */ elementConfidenceThresholds;
    void /* unknown type, empty encoding */ clickabilityDetector;
    void /* unknown type, empty encoding */ clickabilityConfig;
    void /* unknown type, empty encoding */ clickabilityConfidenceThresholds;
    void /* unknown type, empty encoding */ iconDetector;
    void /* unknown type, empty encoding */ focusElementDetector;
}

+ (float)staticIOUThreshold;

- (id)init;
- (void).cxx_destruct;
- (id)getUIObjectsInScreen:(struct CGImage { } *)a0 addOCR:(BOOL)a1 addIconRecognition:(BOOL)a2 addClickability:(BOOL)a3 addFocusElements:(BOOL)a4 nmsThreshold:(float)a5 useAccurateOCR:(BOOL)a6 error:(id *)a7;
- (id)initWithPlatform:(long long)a0 elementConfidenceThresholds:(id)a1 clickabilityConfidenceThresholds:(id)a2 elementConfig:(id)a3 clickabilityConfig:(id)a4 error:(id *)a5;

@end
