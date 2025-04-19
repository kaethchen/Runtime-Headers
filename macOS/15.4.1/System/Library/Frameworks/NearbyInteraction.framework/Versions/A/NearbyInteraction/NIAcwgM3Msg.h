@interface NIAcwgM3Msg : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned char selectedRanMultiplier;
@property (readonly, nonatomic) unsigned char selectedNumChapsPerSlot;
@property (readonly, nonatomic) unsigned char numResponders;
@property (readonly, nonatomic) unsigned char numSlotsPerRound;
@property (readonly, nonatomic) unsigned int supportedSyncCodeIndexBitmask;
@property (readonly, nonatomic) unsigned char selectedHoppingConfigBitmask;
@property (readonly, nonatomic) unsigned char macMode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSelectedRanMultiplier:(unsigned char)a0 selectedNumChapsPerSlot:(unsigned char)a1 numResponders:(unsigned char)a2 numSlotsPerRound:(unsigned char)a3 supportedSyncCodeIndexBitmask:(unsigned int)a4 selectedHoppingConfigBitmask:(unsigned char)a5 macMode:(unsigned char)a6;
- (struct AcwgM3MsgStruct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned int x4; unsigned char x5; unsigned char x6; })toStruct;

@end
