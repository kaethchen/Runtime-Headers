@class NSUUID, NSData;

@interface ENStableGroupID : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSData *dataRepresentation;

+ (unsigned long long)stableGroupIDLength;
+ (id)stableGroupIDWithCurrentTime;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0;
- (id)initWithDataRepresentation:(id)a0;
- (id)_mutableDataRepresentation;
- (int)customUUIDCompare:(unsigned char[16])a0 u2:(unsigned char[16])a1;

@end
