@class NSUUID, NSDictionary;

@interface W5DiagnosticsTestRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *uuid;
@property (nonatomic) long long testID;
@property (copy, nonatomic) NSDictionary *configuration;

+ (id)requestWithTestID:(long long)a0 configuration:(id)a1;

- (void)dealloc;
- (BOOL)conformsToProtocol:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToDiagnosticsTestRequest:(id)a0;

@end
