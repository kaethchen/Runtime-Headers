@interface NIAcwgM4Msg : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int stsIndex0;
@property (readonly, nonatomic) unsigned long long uwbTime0;
@property (readonly, nonatomic) unsigned int hopKey;
@property (readonly, nonatomic) unsigned char selectedSyncCodeIndex;

+ (id)fromStruct:(struct AcwgM4MsgStruct { unsigned int x0; unsigned long long x1; unsigned int x2; unsigned char x3; })a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStsIndex0:(unsigned int)a0 uwbTime0:(unsigned long long)a1 hopKey:(unsigned int)a2 selectedSyncCodeIndex:(unsigned char)a3;
- (struct AcwgM4MsgStruct { unsigned int x0; unsigned long long x1; unsigned int x2; unsigned char x3; })toStruct;

@end
