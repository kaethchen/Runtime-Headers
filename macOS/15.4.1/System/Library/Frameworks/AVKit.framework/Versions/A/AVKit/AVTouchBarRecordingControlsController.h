@class NSArray, NSString, NSNumber, AVTouchBarCaptureInputSourceItem;
@protocol AVTouchBarRecordingControlsControlling;

@interface AVTouchBarRecordingControlsController : NSObject <AVTouchBarRecordingControlsControllingInternal> {
    id<AVTouchBarRecordingControlsControlling> _externalTouchBarRecordingControlsController;
    struct { BOOL _videoTouchBarInputSourceItems; BOOL _selectedVideoTouchBarInputSourceItem; BOOL _audioTouchBarInputSourceItems; BOOL _selectedAudioTouchBarInputSourceItem; BOOL _screenTouchBarInputSourceItems; BOOL _selectedScreenTouchBarInputSourceItem; BOOL _selectTouchBarInputSourceItem; } _externalControllerRespondsTo;
}

@property (weak) id<AVTouchBarRecordingControlsControlling> externalTouchBarRecordingControlsController;
@property (readonly) BOOL canAssociateAudioAndVideoDevices;
@property (readonly) double recordedTime;
@property (readonly) NSNumber *recordedFileSize;
@property (readonly, getter=isRecording) BOOL recording;
@property (readonly, getter=isPaused) BOOL paused;
@property (readonly) BOOL canStartRecording;
@property (readonly) BOOL canPauseRecording;
@property (readonly) BOOL canResumeRecording;
@property (readonly) BOOL canStopRecording;
@property (readonly) NSArray *videoTouchBarInputSourceItems;
@property (readonly) AVTouchBarCaptureInputSourceItem *selectedVideoTouchBarInputSourceItem;
@property (readonly) NSArray *audioTouchBarInputSourceItems;
@property (readonly) AVTouchBarCaptureInputSourceItem *selectedAudioTouchBarInputSourceItem;
@property (readonly) NSArray *screenTouchBarInputSourceItems;
@property (readonly) AVTouchBarCaptureInputSourceItem *selectedScreenTouchBarInputSourceItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingSelectedScreenTouchBarInputSourceItem;
+ (BOOL)automaticallyNotifiesObserversOfAudioTouchBarInputSourceItems;
+ (BOOL)automaticallyNotifiesObserversOfCanPauseRecording;
+ (BOOL)automaticallyNotifiesObserversOfCanResumeRecording;
+ (BOOL)automaticallyNotifiesObserversOfCanStartRecording;
+ (BOOL)automaticallyNotifiesObserversOfCanStopRecording;
+ (BOOL)automaticallyNotifiesObserversOfPaused;
+ (BOOL)automaticallyNotifiesObserversOfRecordedFileSize;
+ (BOOL)automaticallyNotifiesObserversOfRecordedTime;
+ (BOOL)automaticallyNotifiesObserversOfRecording;
+ (BOOL)automaticallyNotifiesObserversOfScreenTouchBarInputSourceItems;
+ (BOOL)automaticallyNotifiesObserversOfSelectedAudioTouchBarInputSourceItem;
+ (BOOL)automaticallyNotifiesObserversOfSelectedScreenTouchBarInputSourceItem;
+ (BOOL)automaticallyNotifiesObserversOfSelectedVideoTouchBarInputSourceItem;
+ (BOOL)automaticallyNotifiesObserversOfVideoTouchBarInputSourceItems;
+ (id)keyPathsForValuesAffectingAudioTouchBarInputSourceItems;
+ (id)keyPathsForValuesAffectingCanPauseRecording;
+ (id)keyPathsForValuesAffectingCanResumeRecording;
+ (id)keyPathsForValuesAffectingCanStartRecording;
+ (id)keyPathsForValuesAffectingCanStopRecording;
+ (id)keyPathsForValuesAffectingPaused;
+ (id)keyPathsForValuesAffectingRecordedFileSize;
+ (id)keyPathsForValuesAffectingRecordedTime;
+ (id)keyPathsForValuesAffectingRecording;
+ (id)keyPathsForValuesAffectingScreenTouchBarInputSourceItems;
+ (id)keyPathsForValuesAffectingSelectedAudioTouchBarInputSourceItem;
+ (id)keyPathsForValuesAffectingSelectedVideoTouchBarInputSourceItem;
+ (id)keyPathsForValuesAffectingVideoTouchBarInputSourceItems;

- (void).cxx_destruct;
- (void)startRecording;
- (void)stopRecording;
- (void)resumeRecording;
- (void)pauseRecording;
- (void)selectTouchBarInputSourceItem:(id)a0;
- (void)startDiscoveringWirelessCaptureDevices;
- (void)stopDiscoveringWirelessCaptureDevices;

@end
