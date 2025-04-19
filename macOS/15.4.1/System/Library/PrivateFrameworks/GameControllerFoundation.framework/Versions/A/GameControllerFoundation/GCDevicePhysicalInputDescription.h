@class NSArray, NSSet;

@interface GCDevicePhysicalInputDescription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *elements;
@property (copy, nonatomic) NSSet *attributes;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (BOOL)validate:(out id *)a0;

@end
