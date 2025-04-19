@class VCCapabilities;

@interface AVConferenceCallState : NSObject

@property (nonatomic, getter=isAudioPaused) BOOL audioIsPaused;
@property (nonatomic, getter=isVideoPaused) BOOL isVideoPaused;
@property (nonatomic, getter=isAudioSending) BOOL isAudioSending;
@property (retain, nonatomic) VCCapabilities *capabilities;
@property (nonatomic) unsigned char relayedCallType;

- (void)dealloc;

@end
