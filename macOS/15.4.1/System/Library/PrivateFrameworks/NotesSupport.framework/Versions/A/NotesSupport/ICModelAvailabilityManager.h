@interface ICModelAvailabilityManager : NSObject {
    void /* unknown type, empty encoding */ generalASRLock;
}

@property (class, nonatomic, retain) ICModelAvailabilityManager *sharedInstance;

@property (nonatomic, readonly) BOOL supportsCallRecording;
@property (nonatomic, readonly) BOOL supportsCallTranscription;
@property (nonatomic, readonly) BOOL supportsPrivateCloudComputeSummary;
@property (nonatomic, readonly) BOOL supportsOnDeviceSummary;
@property (nonatomic, readonly) BOOL supportsGeneralASR;

- (id)init;
- (void).cxx_destruct;
- (void)fetchAndCacheAsyncAvailabilities:(void (^)(void))a0;

@end
