@class NSArray, NSString, AVCaptureDataOutputSynchronizerInternal_Tundra, NSObject;
@protocol OS_dispatch_queue, AVCaptureDataOutputSynchronizerDelegate_Tundra;

@interface AVCaptureDataOutputSynchronizer_Tundra : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate_Tundra, AVCaptureAudioDataOutputSampleBufferDelegate_Tundra, AVCaptureMetadataOutputObjectsDelegate_Tundra, AVCaptureDepthDataOutputDelegate_Tundra> {
    AVCaptureDataOutputSynchronizerInternal_Tundra *_internal;
}

@property (readonly, retain) NSArray *dataOutputs;
@property (readonly, nonatomic) id<AVCaptureDataOutputSynchronizerDelegate_Tundra> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (id)initWithDataOutputs:(id)a0;

@end
