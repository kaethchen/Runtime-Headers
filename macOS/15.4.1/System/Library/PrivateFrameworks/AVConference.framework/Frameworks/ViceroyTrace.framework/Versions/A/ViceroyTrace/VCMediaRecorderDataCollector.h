@class VCHistogram, NSObject;
@protocol OS_dispatch_queue;

@interface VCMediaRecorderDataCollector : NSObject {
    NSObject<OS_dispatch_queue> *_stateQueue;
    unsigned char _mediaRecorderCaptureTotal;
    unsigned char _mediaRecorderCaptureFailure;
    VCHistogram *_mediaRecorderMediaTypeHistogram;
    VCHistogram *_mediaRecorderResultsHistogram;
    VCHistogram *_mediaRecorderFileSizeHistogram;
    VCHistogram *_mediaRecorderMessageLengthHistogram;
    int _thermalLevel;
    VCHistogram *_mediaRecorderThermalHistogram;
}

- (void)dealloc;
- (id)initWithDispatchQueue:(id)a0;
- (void)addAggregatedMediaRecorderMetricsToReport:(id)a0;
- (void)updateLivePhotoMediaRecorderEventStats:(id)a0;
- (void)updateMediaRecorderEventStats:(id)a0;
- (void)updateMediaRecordingMediaRecorderEventStats:(id)a0;
- (void)updateThermalLevel:(int)a0;

@end
