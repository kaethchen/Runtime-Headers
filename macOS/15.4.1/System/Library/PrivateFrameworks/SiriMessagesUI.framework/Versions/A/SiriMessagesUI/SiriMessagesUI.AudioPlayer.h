@interface SiriMessagesUI.AudioPlayer : NSObject <AVAudioPlayerDelegate> {
    void /* unknown type, empty encoding */ _isPlaying;
    void /* unknown type, empty encoding */ player;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (id)init;
- (void).cxx_destruct;
- (void)audioPlayerDecodeErrorDidOccur:(id)a0 error:(id)a1;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;

@end
