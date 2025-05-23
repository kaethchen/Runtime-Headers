@class NSString;

@interface WFType : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *typeDescription;
@property (readonly, copy, nonatomic) NSString *string;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)conformsToType:(id)a0;
- (BOOL)isEqualToClass:(Class)a0;
- (BOOL)conformsToClass:(Class)a0;
- (BOOL)conformsToString:(id)a0;
- (BOOL)conformsToTypes:(id)a0;
- (BOOL)conformsToUTType:(id)a0;
- (BOOL)isEqualToType:(id)a0;
- (BOOL)isEqualToUTType:(id)a0;

@end
