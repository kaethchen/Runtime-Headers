@class MIDICIDevice, NSString, NSData;

@interface MIDIUMPCIProfile : NSObject {
    NSData *_profileID;
}

@property (weak, nonatomic) MIDICIDevice *ciDevice;
@property (nonatomic) unsigned int objectRef;
@property (nonatomic) BOOL isMine;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) union { struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; } x0; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; } x1; } profileID;
@property (readonly, nonatomic) unsigned char profileType;
@property (readonly, nonatomic) unsigned char groupOffset;
@property (readonly, nonatomic) unsigned char firstChannel;
@property (readonly, nonatomic) unsigned short enabledChannelCount;
@property (readonly, nonatomic) unsigned short totalChannelCount;
@property (readonly, nonatomic) BOOL isEnabled;

+ (id)description;

- (void).cxx_destruct;
- (id)initWithDescription:(id)a0;
- (BOOL)deserialize:(id)a0;
- (BOOL)hasOwner;
- (id)initWithProfileID:(union { struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; } x0; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; } x1; })a0 name:(id)a1 type:(unsigned char)a2 firstGroup:(unsigned char)a3 firstChannel:(unsigned char)a4 enabledChannelCount:(unsigned short)a5 totalChannelCount:(unsigned short)a6;
- (BOOL)registerToDevice:(id)a0;
- (id)serializeDescription;
- (BOOL)setProfileState:(BOOL)a0 enabledChannelCount:(unsigned short)a1 error:(id *)a2;

@end
