@class NSArray;

@interface NIAcwgM1Msg : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *supportedUwbConfigIds;
@property (readonly, nonatomic) NSArray *supportedPulseShapeCombos;
@property (readonly, nonatomic) unsigned char channelBitmask;
@property (readonly, nonatomic) unsigned int uwbSessionId;
@property (readonly, nonatomic) unsigned char finalData2Bitmask;
@property (readonly, nonatomic) unsigned short selectedProtocolVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSupportedUwbConfigIds:(id)a0 supportedPulseShapeCombos:(id)a1 channelBitmask:(unsigned char)a2 uwbSessionId:(unsigned int)a3;
- (id)initWithSupportedUwbConfigIds:(id)a0 supportedPulseShapeCombos:(id)a1 channelBitmask:(unsigned char)a2 uwbSessionId:(unsigned int)a3 finalData2Bitmask:(unsigned char)a4;
- (id)initWithSupportedUwbConfigIds:(id)a0 supportedPulseShapeCombos:(id)a1 channelBitmask:(unsigned char)a2 uwbSessionId:(unsigned int)a3 finalData2Bitmask:(unsigned char)a4 selectedProtocolVersion:(unsigned short)a5;
- (struct AcwgM1MsgStruct { struct vector<unsigned short, std::allocator<unsigned short>> { unsigned short *x0; unsigned short *x1; struct __compressed_pair<unsigned short *, std::allocator<unsigned short>> { unsigned short *x0; } x2; } x0; struct vector<unsigned char, std::allocator<unsigned char>> { char *x0; char *x1; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *x0; } x2; } x1; unsigned char x2; unsigned int x3; unsigned char x4; unsigned short x5; })toStruct;

@end
