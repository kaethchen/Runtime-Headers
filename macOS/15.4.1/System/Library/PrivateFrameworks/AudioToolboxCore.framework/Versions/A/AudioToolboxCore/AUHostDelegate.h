@class AUAudioUnit, NSObject;
@protocol OS_dispatch_queue;

@interface AUHostDelegate : NSObject <AUAudioUnitHostProtocol> {
    NSObject<OS_dispatch_queue> *mParameterQueue;
}

@property (weak, nonatomic) AUAudioUnit *audioUnit;

- (id)init;
- (void).cxx_destruct;
- (void)MIDICIProfileChanged:(unsigned char)a0 channel:(unsigned char)a1 profile:(id)a2 enabled:(BOOL)a3;
- (void)propertiesChanged:(id)a0;
- (void)sendUnhandledKeyboardEvent:(id)a0 owner:(unsigned int)a1 reply:(id /* block */)a2;
- (void)speechSynthesisMetadataAvailable:(id)a0 speechRequest:(id)a1;
- (void)syncParameter:(unsigned long long)a0 value:(float)a1 extOriginator:(unsigned long long)a2 hostTime:(unsigned long long)a3 eventType:(unsigned int)a4;

@end
