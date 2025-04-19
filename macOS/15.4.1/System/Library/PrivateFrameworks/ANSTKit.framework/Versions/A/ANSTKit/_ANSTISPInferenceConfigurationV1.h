@interface _ANSTISPInferenceConfigurationV1 : ANSTISPInferenceConfiguration {
    BOOL _objectTrackingEnabled;
    BOOL _segmentationEnabled;
    long long _resolution;
    long long _frameRate;
}

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)_version;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)frameRate;
- (long long)resolution;
- (void)setFrameRate:(long long)a0;
- (void)setResolution:(long long)a0;
- (id)initForVersion:(unsigned long long)a0 withError:(id *)a1;
- (BOOL)isObjectTrackingEnabled;
- (BOOL)isSegmentationEnabled;
- (void)setObjectTrackingEnabled:(BOOL)a0;
- (void)setSegmentationEnabled:(BOOL)a0;

@end
