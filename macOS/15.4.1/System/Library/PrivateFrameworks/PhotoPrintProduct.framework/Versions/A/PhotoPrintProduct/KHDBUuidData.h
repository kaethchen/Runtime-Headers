@class NSString, NSData;

@interface KHDBUuidData : NSData {
    unsigned char _uuid[16];
}

@property (readonly, nonatomic) NSString *canonicalStringValue;
@property (readonly, nonatomic) NSString *mercuryStringValue;
@property (readonly, nonatomic) NSData *dataValue;
@property (readonly, nonatomic) BOOL isNull;

+ (id)uuidWithBytes:(const void *)a0 length:(unsigned long long)a1;
+ (id)uuidWithData:(id)a0;
+ (id)uuidWithString:(id)a0;
+ (id)generateUuidAsCanonicalString;
+ (id)generateUuidAsMercuryString;
+ (BOOL)isCanonicalUuidString:(id)a0;
+ (BOOL)isMercuryBase64String:(id)a0;
+ (BOOL)isMercuryUuidString:(id)a0;
+ (BOOL)isSupportedUuidString:(id)a0;
+ (id)nullUuid;
+ (id)randomUuid;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (unsigned long long)length;
- (const void *)bytes;
- (id)initWithString:(id)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (Class)classForArchiver;
- (Class)classForPortCoder;
- (BOOL)isEqualToData:(id)a0;
- (id)initNull;
- (id)initRandom;
- (id)initWithMercuryBase64String:(id)a0;

@end
