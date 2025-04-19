@interface SRFSignpostLog : NSObject

+ (id)sharedInstance;
+ (void)SRFInvokeEvent:(id)a0;
+ (void)SRFAlertStateDidChange:(id)a0;
+ (void)SRFInvokeEventReceived:(id)a0;
+ (void)SRFPresentAlertEvent;
+ (void)SRFReleaseDarkWakeAssertionEvent;
+ (void)SRFSiriDidLaunch;
+ (void)SRFSiriViewDidAppearEvent;
+ (void)SRFSiriViewDidLayoutEvent;
+ (void)SRFSiriViewWillAppearEvent;
+ (void)SRFSiriViewWillLayoutEvent;
+ (void)SRFSpeechCreation:(unsigned long long)a0;
+ (void)SRFSpeechVocalizationEnd;
+ (void)SRFSiriViewDidMoveToWindowEvent;
+ (void)SRFHoldDarkWakeAssertionEvent;
+ (void)SRFLaunchSiriRequested;
+ (void)SRFRecordingDidBegin;
+ (void)SRFSiriAwakeFromNibEvent;
+ (void)SRFSiriLoadViewEvent;
+ (void)SRFSiriViewDidDisappearEvent;
+ (void)SRFSiriViewDidLoadEvent;
+ (void)SRFSiriViewWillDisappearEvent;
+ (void)SRFSiriViewWillMoveToWindowEvent;
+ (void)SRFSpeechVocalizationBegin;
+ (void)audioManagerDuckedAudio:(unsigned int)a0;
+ (void)audioManagerPausedMediaClient:(id)a0;
+ (void)audioManagerPausedMusic;
+ (void)audioManagerUnduckedAudio:(unsigned int)a0;
+ (void)audioManagerUnpausedMediaClient:(id)a0;
+ (void)audioManagerUnpausedMusic;

@end
