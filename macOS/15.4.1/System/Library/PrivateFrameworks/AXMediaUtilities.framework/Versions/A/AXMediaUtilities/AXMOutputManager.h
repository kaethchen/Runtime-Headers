@class AXMOutputManagerConfiguration, NSString, AXMSpeechComponent, AXMTaskDispatcher, NSArray, AXMSoundComponent, NSObject, AXMAudioSession;
@protocol OS_dispatch_queue;

@interface AXMOutputManager : NSObject <AXMTaskDispatcherDelegate> {
    AXMTaskDispatcher *_outputRequests;
    BOOL _usesPrivateAudioSession;
    AXMAudioSession *_audioSession;
    long long _state;
    NSObject<OS_dispatch_queue> *_queue;
    AXMSoundComponent *_queue_soundComponent;
    AXMSpeechComponent *_queue_speechComponent;
    NSArray *_queue_activeComponents;
}

@property (retain, nonatomic) AXMOutputManagerConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)disable;
- (id)initWithConfiguration:(id)a0;
- (void)speak:(id)a0;
- (void)playSound:(id)a0;
- (id)dispatchRequest:(id)a0;
- (void)dispatcher:(id)a0 handleTask:(id)a1;
- (void)enableWithCompletion:(id /* block */)a0;
- (id)initWithComponents:(unsigned long long)a0 options:(unsigned long long)a1;
- (void)interrupt:(id)a0;
- (void)interruptImmediately;
- (void)interruptPolitely;
- (id)playActiveSound:(id)a0;

@end
