@class NSString, DACUnknownActivityPolicy;

@interface DACActivityDescriptor : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long priority;
@property (readonly, nonatomic) DACUnknownActivityPolicy *policy;
@property (readonly, nonatomic, getter=isLocalOnly) BOOL localOnly;

+ (id /* block */)comparator;
+ (id)activityDescriptorWithIdentifier:(id)a0 priority:(unsigned long long)a1 policy:(id)a2;
+ (id)localOnlyActivityDescriptorWithIdentifier:(id)a0 priority:(unsigned long long)a1 policy:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
