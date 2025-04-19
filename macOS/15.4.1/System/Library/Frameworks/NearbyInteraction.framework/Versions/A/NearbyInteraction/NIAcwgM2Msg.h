@interface NIAcwgM2Msg : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned short selectedUwbConfigId;
@property (readonly, nonatomic) unsigned char selectedPulseShapeCombo;
@property (readonly, nonatomic) unsigned char selectedChannelBitmask;
@property (readonly, nonatomic) unsigned int supportedSyncCodeIndexBitmask;
@property (readonly, nonatomic) unsigned char minRanMultiplier;
@property (readonly, nonatomic) unsigned char supportedSlotBitmask;
@property (readonly, nonatomic) unsigned char supportedHoppingConfigBitmask;
@property (readonly, nonatomic) unsigned char selectedFinalData2Bitmask;

+ (id)fromStruct:(struct AcwgM2MsgStruct { unsigned short x0; unsigned char x1; unsigned char x2; unsigned int x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; })a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSelectedUwbConfigId:(unsigned short)a0 selectedPulseShapeCombo:(unsigned char)a1 selectedChannelBitmask:(unsigned char)a2 supportedSyncCodeIndexBitmask:(unsigned int)a3 minRanMultiplier:(unsigned char)a4 supportedSlotBitmask:(unsigned char)a5 supportedHoppingConfigBitmask:(unsigned char)a6;
- (id)initWithSelectedUwbConfigId:(unsigned short)a0 selectedPulseShapeCombo:(unsigned char)a1 selectedChannelBitmask:(unsigned char)a2 supportedSyncCodeIndexBitmask:(unsigned int)a3 minRanMultiplier:(unsigned char)a4 supportedSlotBitmask:(unsigned char)a5 supportedHoppingConfigBitmask:(unsigned char)a6 selectedFinalData2Bitmask:(unsigned char)a7;
- (struct AcwgM2MsgStruct { unsigned short x0; unsigned char x1; unsigned char x2; unsigned int x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; })toStruct;

@end
