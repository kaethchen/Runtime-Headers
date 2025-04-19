@interface CoreHapticsTools.CHTAudioContinuousEvent : CoreHapticsTools.CHTEvent {
    void /* unknown type, empty encoding */ _duration;
    void /* unknown type, empty encoding */ _volume;
    void /* unknown type, empty encoding */ _pitch;
    void /* unknown type, empty encoding */ _brightness;
    void /* unknown type, empty encoding */ _pan;
    void /* unknown type, empty encoding */ _attackTime;
    void /* unknown type, empty encoding */ _decayTime;
    void /* unknown type, empty encoding */ _sustained;
    void /* unknown type, empty encoding */ _releaseTime;
}

@property (nonatomic) struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; } duration;

- (void).cxx_destruct;

@end
