@interface FPOnGlassCAMetalLayerDrawableInterval : NSObject {
    unsigned int _commandBufferCount;
    double _inFlightStart;
    double _waitStartTime;
    double _acquiredTime;
    double _presentCalledTime;
    double _onGPUStart;
    double _onGPUEnd;
    double _onGlassStart;
    double _onGPUTime;
}

@end
