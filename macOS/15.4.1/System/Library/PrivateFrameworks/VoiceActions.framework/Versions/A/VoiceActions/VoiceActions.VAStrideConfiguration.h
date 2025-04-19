@interface VoiceActions.VAStrideConfiguration : NSObject {
    void /* unknown type, empty encoding */ audioSampleRate;
    void /* unknown type, empty encoding */ samplesPerEncoding;
    void /* unknown type, empty encoding */ samplesPerEncodingStride;
    void /* unknown type, empty encoding */ encodingsPerVerification;
    void /* unknown type, empty encoding */ samplesPerPredictionWindow;
    void /* unknown type, empty encoding */ featureExtractionSamplesPerHop;
    void /* unknown type, empty encoding */ featureExtractionSamplesStridePerHop;
    void /* unknown type, empty encoding */ featureExtractionNumFeaturesPerSlice;
    void /* unknown type, empty encoding */ featureExtractionNumHops;
    void /* unknown type, empty encoding */ featureExtractionModelInputSize;
}

- (id)init;

@end
