@interface TextToSpeechVoiceBankingUI.VoicePreviewer : SwiftNativeNSObject <AVAudioPlayerDelegate> {
    void /* unknown type, empty encoding */ synth;
    void /* unknown type, empty encoding */ currentPlayer;
    void /* unknown type, empty encoding */ currentPreviewContinuaion;
}

- (id)init;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;

@end
