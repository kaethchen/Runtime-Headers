@class NSArray;

@interface SFIdentitySearchFilter : NSObject <NSCopying, NSSecureCoding> {
    id _identitySearchFilterInternal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *certificateSerialNumbers;
@property (copy, nonatomic) NSArray *certificateTypes;
@property (copy, nonatomic) NSArray *keySpecifiers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
