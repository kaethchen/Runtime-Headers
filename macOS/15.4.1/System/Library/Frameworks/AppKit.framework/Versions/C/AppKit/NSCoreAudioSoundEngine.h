@class NSString, NSData;
@protocol NSSoundEngineDelegate;

@interface NSCoreAudioSoundEngine : NSObject <NSSoundEngine> {
    id<NSSoundEngineDelegate> _delegate;
    NSData *_data;
    struct OpaqueAudioConverter { } *_audioConverter;
    struct AudioBuffer { unsigned int mNumberChannels; unsigned int mDataByteSize; void *mData; } _converterBuffer;
    struct ComponentInstanceRecord { long long x0[1]; } *_outputUnit;
    struct OpaqueAudioFileID { } *_audioFile;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _audioFormat;
    long long _audioDataReadHeadPosition;
    unsigned long long _audioDataLength;
    long long _audioValidFrameCount;
    unsigned int _maximumPackets;
    struct AudioStreamPacketDescription { long long x0; unsigned int x1; unsigned int x2; } *_audioPacketDescriptions;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lockedShouldLoop;
    BOOL _tracksDefaultOutput;
    BOOL _audioUnitIsPlaying;
}

@property (readonly) double duration;
@property double currentTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (BOOL)resume;
- (BOOL)pause;
- (void)stop;
- (void)volumeDidChange;
- (void)channelMappingDidChange;
- (void)deviceUIDDidChange;
- (BOOL)play;
- (void)resetPosition;
- (void)shouldLoopDidChange;

@end
