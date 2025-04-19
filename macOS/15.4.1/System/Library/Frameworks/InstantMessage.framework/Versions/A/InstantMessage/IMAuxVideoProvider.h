@class NSString, NSThread, IMSharedPixelBufferPool;

@interface IMAuxVideoProvider : NSObject <IMAuxVideoProvider> {
    unsigned long long _clientState;
    NSString *_providerID;
    BOOL _didConnect;
    BOOL _willUpdateSettings;
    NSThread *_callbackThread;
    IMSharedPixelBufferPool *_sharedBufferPool;
    double _frameRate;
    unsigned long long _shouldExit;
    unsigned long long _isAboutToExitThread;
}

- (id)init;
- (unsigned long long)clientState;
- (void)_connectToReceiver;
- (void)_setClientState:(unsigned long long)a0;
- (id)auxVideoReceiverTarget;
- (void)deactivateVideoProvider;
- (void)deliverFrameWithBufferID:(long long)a0 attachments:(id)a1;
- (oneway void)disconnectAndActivate:(BOOL)a0;
- (void)makeInactive;
- (oneway void)performActionForControlWithDictionaryRepresentation:(id)a0;
- (oneway void)provideFrameAtFramerate:(double)a0;
- (oneway void)setBufferPoolDescription:(id)a0 audioDeviceUID:(id)a1 channels:(id)a2;
- (void)startClient;
- (void)stopClient;
- (void)updateControlBarFromDictionaryRepresentation:(id)a0;
- (void)updateVideoProvider;

@end
