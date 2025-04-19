@class NSString, NSSet;

@interface HDStateSyncEntitySchema : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *domain;
@property (retain, nonatomic) NSSet *dataKeys;

+ (id)schemaWithDomain:(id)a0 dataKeys:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithWithDomain:(id)a0 dataKeys:(id)a1;

@end
