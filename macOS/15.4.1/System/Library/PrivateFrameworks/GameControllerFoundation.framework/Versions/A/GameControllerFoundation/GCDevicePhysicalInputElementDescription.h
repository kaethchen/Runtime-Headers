@class NSString, NSSet, GCDevicePhysicalInputSymbolDescription;

@interface GCDevicePhysicalInputElementDescription : GCDevicePhysicalInputViewDescription <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSSet *aliases;
@property (copy, nonatomic) NSString *localizedName;
@property (copy, nonatomic) GCDevicePhysicalInputSymbolDescription *symbol;

+ (id)descriptionWithIdentifier:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (BOOL)validate:(out id *)a0;

@end
