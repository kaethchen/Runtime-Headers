@class NSString;

@interface AXVoiceOverVoiceRotorItem : NSObject {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ userDefinedName;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *userDefinedName;
@property (nonatomic, copy) NSString *voiceId;
@property (nonatomic, retain) void /* unknown type, empty encoding */ selection;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 selection:(id)a1 userDefinedName:(id)a2;

@end
