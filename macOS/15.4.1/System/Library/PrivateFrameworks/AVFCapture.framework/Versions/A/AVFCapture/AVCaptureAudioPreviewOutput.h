@class NSString, AVCaptureAudioPreviewOutputInternal;

@interface AVCaptureAudioPreviewOutput : AVCaptureOutput {
    AVCaptureAudioPreviewOutputInternal *_internal;
}

@property (copy, nonatomic) NSString *outputDeviceUniqueID;
@property (nonatomic) float volume;

+ (id)new;
+ (void)initialize;

- (void)dealloc;
- (id)init;
- (BOOL)canAddConnection:(id)a0 failureReason:(id *)a1;
- (void)_updateOutputDeviceUniqueID:(id)a0;
- (void)_updateVolume:(float)a0;
- (id)connectionMediaTypes;

@end
