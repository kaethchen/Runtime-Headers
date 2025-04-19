@interface BWZoomDelayBuffer : NSObject {
    struct { float x0; float x1; int x2; BOOL x3; } *_zoomRequestBuffer;
    unsigned int _zoomRequestBufferIndex;
    unsigned int _maxZoomDelay;
    unsigned int _currentZoomDelay;
    int _currentZoomDirection;
    int _operatingMode;
}

- (void)dealloc;

@end
