@interface AXPreferences : AXBridgedSettings

@property (class, nonatomic, retain) AXPreferences *shared;

@property (nonatomic, retain) void /* unknown type, empty encoding */ voiceover;
@property (nonatomic, retain) void /* unknown type, empty encoding */ magnifier;
@property (nonatomic, retain) void /* unknown type, empty encoding */ spokenContent;
@property (nonatomic, retain) void /* unknown type, empty encoding */ assistiveTouch;
@property (nonatomic, retain) void /* unknown type, empty encoding */ liveSpeech;

- (id)init;
- (void).cxx_destruct;

@end
