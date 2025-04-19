@class NSString;

@interface SRElectrocardiogramSession : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) long long sessionGuidance;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (id)new;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToSession:(id)a0;
- (id)initWithState:(long long)a0 sessionGuidance:(long long)a1 identifier:(id)a2;

@end
