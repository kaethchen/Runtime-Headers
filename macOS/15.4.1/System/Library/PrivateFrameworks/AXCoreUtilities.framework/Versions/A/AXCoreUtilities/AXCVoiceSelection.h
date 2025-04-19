@class NSString, NSDictionary, NSArray;

@interface AXCVoiceSelection : NSObject {
    void /* unknown type, empty encoding */ voiceId;
    void /* unknown type, empty encoding */ voiceSettings;
    void /* unknown type, empty encoding */ effects;
}

@property (nonatomic, copy) NSString *voiceId;
@property (nonatomic, retain) void /* unknown type, empty encoding */ rate;
@property (nonatomic, retain) void /* unknown type, empty encoding */ pitch;
@property (nonatomic, retain) void /* unknown type, empty encoding */ volume;
@property (nonatomic, copy) NSDictionary *voiceSettings;
@property (nonatomic, copy) NSArray *effects;

- (id)init;
- (void).cxx_destruct;
- (id)initWithVoiceId:(id)a0 rate:(id)a1 pitch:(id)a2 volume:(id)a3 voiceSettings:(id)a4 effects:(id)a5;

@end
