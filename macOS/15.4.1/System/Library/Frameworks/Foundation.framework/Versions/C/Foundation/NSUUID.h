@class NSString;

@interface NSUUID : NSObject <BSXPCSecureCoding, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *UUIDString;

+ (id)_LS_UUIDWithData:(id)a0 digestType:(long long)a1;
+ (id)_LS_nullUUID;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)UUID;
+ (BOOL)_compatibilityBehavior;

- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)uuid;
- (id)launchPersona;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (Class)classForCoder;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)getUUIDBytes:(unsigned char[16])a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUUIDBytes:(unsigned char[16])a0;
- (id)initWithUUIDString:(id)a0;
- (struct __CFString { } *)_cfUUIDString;

@end
