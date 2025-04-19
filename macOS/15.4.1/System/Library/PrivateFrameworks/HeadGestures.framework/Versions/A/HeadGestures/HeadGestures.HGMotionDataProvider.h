@class NSString;

@interface HeadGestures.HGMotionDataProvider : NSObject {
    void /* unknown type, empty encoding */ motionDataSubject;
    void /* unknown type, empty encoding */ _isStreamingData;
    void /* unknown type, empty encoding */ motionDataPublisher;
    void /* unknown type, empty encoding */ operationQueue;
    void /* unknown type, empty encoding */ streamingStatueMonitor;
    void /* unknown type, empty encoding */ samplingRatePool;
    void /* unknown type, empty encoding */ lastReceivedCMDeviceMotion;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
