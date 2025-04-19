@class MIDIUMPMutableEndpoint;

@interface MIDIUMPMutableFunctionBlock : MIDIUMPFunctionBlock

@property (readonly, weak, nonatomic) MIDIUMPMutableEndpoint *UMPEndpoint;

+ (id)description;

- (BOOL)setEnabled:(BOOL)a0 error:(id *)a1;
- (BOOL)registerWithServer;
- (id)initWithName:(id)a0 direction:(int)a1 firstGroup:(unsigned char)a2 totalGroupsSpanned:(unsigned char)a3 maxSysEx8Streams:(unsigned char)a4 MIDI1Info:(int)a5 UIHint:(int)a6 isEnabled:(BOOL)a7;
- (BOOL)reconfigureWithFirstGroup:(unsigned char)a0 direction:(int)a1 MIDI1Info:(int)a2 UIHint:(int)a3 error:(id *)a4;
- (void)setFunctionBlockID:(unsigned char)a0;
- (BOOL)setName:(id)a0 error:(id *)a1;

@end
