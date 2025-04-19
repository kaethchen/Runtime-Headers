@class OSAScriptController;

@interface OSARecordingController : NSObject {
    OSAScriptController *_controller;
    unsigned int _recordedScript;
}

+ (id)sharedRecordingController;

- (void)dealloc;
- (id)init;
- (id)controller;
- (void)setController:(id)a0;
- (void)handleRecordedTextAppleEvent:(id)a0 withReplyEvent:(id)a1;
- (void)startRecordingForController:(id)a0;
- (void)stopRecordingForController:(id)a0;

@end
