@class NSArray, NSDictionary, NSData, NSURL, NSObject, AVAudioFormat;
@protocol AVAudioPlayerDelegate, OS_dispatch_queue;

@interface AudioPlayerImpl : NSObject {
    id<AVAudioPlayerDelegate> _delegate;
    NSData *_data;
    NSURL *_url;
    NSDictionary *_actualSettings;
    AVAudioFormat *_format;
    BOOL _playRetain;
    NSArray *_channelAssignments;
    void *_localPlayer;
    NSObject<OS_dispatch_queue> *_gcd;
}

- (void)dealloc;
- (id)init;

@end
