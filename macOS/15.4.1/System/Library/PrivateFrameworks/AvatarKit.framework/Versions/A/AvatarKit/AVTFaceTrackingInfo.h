@interface AVTFaceTrackingInfo : NSObject {
    struct { double timestamp; void /* unknown type, empty encoding */ translation; void /* unknown type, empty encoding */ orientation; BOOL cameraSpace; float blendShapeWeights_smooth[51]; float blendShapeWeights_raw[51]; float parameters_smooth[1]; float parameters_raw[1]; } _trackingData;
}

@property (readonly) const struct { double x0; BOOL x1; float x2[51]; float x3[51]; float x4[1]; float x5[1]; } *trackingData;

+ (id)trackingInfoWithTrackingData:(struct { double x0; BOOL x1; float x2[51]; float x3[51]; float x4[1]; float x5[1]; } *)a0;

@end
