@class NSString, SCObjectList, SCStatusItem;

@interface SCStreamManager : NSObject <RPScreenRecorderScreenCapureKitDelegate, RPScreenRecorderScreenCapureKitPreviewDelegate, RPScreenRecorderScreenCapureKitRecordingOutputDelegate, SCStatusItemDelegate> {
    SCObjectList *_currentStreams;
    SCObjectList *_currentPreviews;
    SCObjectList *_currentRecordingOutputs;
    SCStatusItem *_statusItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)stream:(id)a0 didStopWithError:(id)a1;
- (void)registerPreview:(id)a0;
- (void)previewDidUpdate:(id)a0;
- (void)recordingOutput:(id)a0 didFailWithError:(id)a1;
- (void)recordingOutputDidFinishRecording:(id)a0;
- (void)recordingOutputDidStartRecording:(id)a0;
- (void)recordingOutputTimerDidUpdate:(id)a0;
- (void)serverDidDisconnect;
- (void)startRemoteQueue:(id)a0 streamID:(id)a1;
- (void)stopRemoteQueue:(id)a0 type:(unsigned char)a1;
- (void)stream:(id)a0 didRequestUpdateFilter:(id)a1;
- (void)stream:(id)a0 updateWithFilter:(id)a1;
- (void)streamOutputEffectDidStart:(BOOL)a0 withStreamID:(id)a1;
- (void)updateStream:(id)a0 withClientOutputType:(unsigned long long)a1;
- (void)registerStream:(id)a0;
- (id)getStreamForID:(id)a0;
- (void)deregisterPreview:(id)a0;
- (void)deregisterRecordingOutput:(id)a0;
- (void)deregisterStream:(id)a0;
- (id)previewForPreviewID:(id)a0;
- (id)recordingOutputForOutputURLPath:(id)a0;
- (void)registerRecordingOutput:(id)a0;
- (void)userDidStopRecordingFromStatusBarForStreamID:(id)a0;

@end
