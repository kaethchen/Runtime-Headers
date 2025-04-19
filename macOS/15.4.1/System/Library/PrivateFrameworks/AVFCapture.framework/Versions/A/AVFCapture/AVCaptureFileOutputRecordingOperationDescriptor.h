@class NSArray, NSString, NSURL, NSError, AVWeakReference;
@protocol AVCaptureFileOutputRecordingDelegate_Tundra;

@interface AVCaptureFileOutputRecordingOperationDescriptor : NSObject <AVCaptureOperationDescriptor> {
    BOOL _didStartWriting;
    AVWeakReference *_weakReferenceDelegate;
}

@property (readonly, nonatomic) NSURL *outputFileURL;
@property (readonly, nonatomic) id<AVCaptureFileOutputRecordingDelegate_Tundra> delegate;
@property (readonly, nonatomic) NSArray *connections;
@property (copy) NSError *stopError;
@property (getter=isPaused) BOOL paused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recordingOperationDescriptorWithOutputFileURL:(id)a0 delegate:(id)a1 connections:(id)a2;

- (void)dealloc;
- (id)init;
- (id)initWithOutputFileURL:(id)a0 delegate:(id)a1 connections:(id)a2;
- (id)operationDescriptorCoalescedWithExistingOperationDescriptor:(id)a0;
- (BOOL)setDidStartWritingIfNotAlreadyStarted;

@end
