@class NSData, NSString;

@interface CBUUID : NSObject <NSCopying> {
    unsigned char _bytes[16];
    char _type;
}

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSString *UUIDString;

+ (id)UUIDWithString:(id)a0;
+ (id)UUIDWithCFUUID:(struct __CFUUID { } *)a0;
+ (id)UUIDWithNSUUID:(id)a0;
+ (id)UUIDWithData:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithString:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithNSUUID:(id)a0;
- (id)initWithCFUUID:(struct __CFUUID { } *)a0;
- (id)initWithString:(id)a0 safe:(BOOL)a1;

@end
