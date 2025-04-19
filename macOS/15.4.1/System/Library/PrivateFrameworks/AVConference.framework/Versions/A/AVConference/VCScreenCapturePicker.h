@class NSString, SCContentSharingPicker, SCContentSharingPickerConfiguration, NSObject;
@protocol OS_dispatch_queue, VCScreenCapturePickerDelegate;

@interface VCScreenCapturePicker : VCObject <SCContentSharingPickerObserver> {
    SCContentSharingPicker *_picker;
    id<VCScreenCapturePickerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (nonatomic) BOOL active;
@property (readonly, nonatomic) SCContentSharingPickerConfiguration *pickerConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)a0;
- (void)invalidate;
- (void)contentSharingPicker:(id)a0 didCancelForStream:(id)a1;
- (void)contentSharingPicker:(id)a0 didUpdateWithFilter:(id)a1 forStream:(id)a2;
- (void)contentSharingPickerStartDidFailWithError:(id)a0;
- (void)showWithStream:(id)a0;
- (void)cancelledForStream:(id)a0;
- (void)pickedContentFilter:(id)a0 forStream:(id)a1 error:(id)a2;
- (void)setRepickingAllowed:(BOOL)a0;
- (void)showWithStream:(id)a0 usingContentStyle:(long long)a1;

@end
