@class NSData;

@interface SRCursor : NSObject <NSCopying, NSSecureCoding> {
    NSData *_payload;
    NSData *_hmac;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)new;
+ (void)initialize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_payloadOfClass:(Class)a0 error:(id *)a1;

@end
