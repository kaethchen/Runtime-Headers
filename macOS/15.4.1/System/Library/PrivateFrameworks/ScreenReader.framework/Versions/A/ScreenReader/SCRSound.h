@class SCROutputAction, NSString, NSURL, NSData;
@protocol SCROutputSoundCallbackProtocol;

@interface SCRSound : NSObject <SCROutputSoundProtocol> {
    struct nssound_info { struct OpaqueAudioConverter *x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1; struct ComponentInstanceRecord *x2; struct OpaqueAudioFileID *x3; struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x4; long long x5; unsigned long long x6; unsigned int x7; struct AudioStreamPacketDescription *x8; } *_info;
}

@property (class, nonatomic) BOOL shouldShortCircuitSoundOutput;

@property (nonatomic) double audioDuration;
@property (nonatomic, setter=_setAudioFile:) struct OpaqueAudioFileID { } *_audioFile;
@property (copy, nonatomic, setter=_setSoundName:) NSString *_soundName;
@property (copy, nonatomic, setter=_setSoundURL:) NSURL *_soundURL;
@property (copy, nonatomic, setter=_setSoundData:) NSData *_soundData;
@property (nonatomic, setter=_setSoundFlags:) unsigned int _soundFlags;
@property (nonatomic, setter=_setCompletionCallbackNeedsSending:) BOOL _completionCallbackNeedsSending;
@property (nonatomic) unsigned long long soundID;
@property (nonatomic) BOOL ensureSingleCompletionCallbacks;
@property (retain, nonatomic) id owner;
@property (retain, nonatomic) SCROutputAction *action;
@property (retain, nonatomic) NSString *category;
@property (nonatomic) int busID;
@property (nonatomic) float volume;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (weak, nonatomic) id<SCROutputSoundCallbackProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)_registerSound:(id)a0;
+ (id)_soundForID:(unsigned long long)a0;
+ (void)_unregisterSound:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)stop;
- (id)_initWithContentsOfURL:(id)a0;
- (BOOL)play;
- (BOOL)stopImmediately;
- (void)_audioCompletedCleanup:(struct __CFBoolean { } *)a0;
- (BOOL)_audioFailed:(id)a0;
- (void)_audioSchedulingComplete;
- (void)_informDelegateOfCompletionIfNeeded:(BOOL)a0;
- (id)_initWithContentsOfFile:(id)a0;
- (void)_postInitialization;
- (void)audioCompletedCleanup;

@end
