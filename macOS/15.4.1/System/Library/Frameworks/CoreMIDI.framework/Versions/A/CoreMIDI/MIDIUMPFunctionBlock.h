@class NSString, MIDIUMPEndpoint, MIDICIDevice;

@interface MIDIUMPFunctionBlock : NSObject {
    BOOL _isMine;
}

@property (nonatomic) unsigned int objectRef;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned char functionBlockID;
@property (readonly, nonatomic) int direction;
@property (readonly, nonatomic) unsigned char firstGroup;
@property (readonly, nonatomic) unsigned char totalGroupsSpanned;
@property (readonly, nonatomic) unsigned char maxSysEx8Streams;
@property (readonly, nonatomic) int MIDI1Info;
@property (readonly, nonatomic) int UIHint;
@property (readonly, weak, nonatomic) MIDIUMPEndpoint *UMPEndpoint;
@property (readonly, weak, nonatomic) MIDICIDevice *midiCIDevice;
@property (readonly, nonatomic) BOOL isEnabled;

+ (id)description;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setEndpoint:(id)a0;
- (id)initWithDescription:(id)a0;
- (BOOL)deserialize:(id)a0;
- (id)serializeDescription;
- (void)setFunctionBlockID:(unsigned char)a0;

@end
