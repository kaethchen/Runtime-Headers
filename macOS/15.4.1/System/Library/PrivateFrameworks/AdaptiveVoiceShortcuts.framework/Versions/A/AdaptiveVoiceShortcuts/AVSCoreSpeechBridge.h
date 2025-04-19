@class NSString, CSCommandControlListener;

@interface AVSCoreSpeechBridge : NSObject <CSCommandControlListenerDelegate> {
    CSCommandControlListener *_commandControlListener;
}

@property (copy, nonatomic) id /* block */ onBufferReceived;
@property (copy, nonatomic) id /* block */ onStopped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)commandControlListener:(id)a0 didStopUnexpectedly:(BOOL)a1;
- (void)commandControlListener:(id)a0 hasLPCMBufferAvailable:(id)a1;
- (void)commandControlListener:(id)a0 hasLPCMBufferAvailable:(id)a1 hostTime:(unsigned long long)a2;
- (void)startListening:(id /* block */)a0;
- (void)stopListening:(id /* block */)a0;
- (const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)recordingASBD;

@end
