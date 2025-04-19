@interface MIDI2DeviceInfo : NSObject

@property (readonly, nonatomic) struct { unsigned char sysExIDByte[3]; } manufacturerID;
@property (readonly, nonatomic) unsigned short family;
@property (readonly, nonatomic) unsigned short modelNumber;
@property (readonly, nonatomic) struct { unsigned char revisionLevel[4]; } revisionLevel;

+ (id)description;
+ (id)infoWithDescription:(id)a0;
+ (id)infoWithInfo:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)initWithManufacturerID:(struct { unsigned char x0[3]; })a0 family:(unsigned short)a1 modelNumber:(unsigned short)a2 revisionLevel:(struct { unsigned char x0[4]; })a3;
- (id)serializeDescription;

@end
