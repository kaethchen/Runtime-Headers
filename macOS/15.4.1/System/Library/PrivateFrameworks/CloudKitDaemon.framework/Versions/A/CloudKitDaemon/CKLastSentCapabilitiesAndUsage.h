@class NSArray, NSString, NSDate;

@interface CKLastSentCapabilitiesAndUsage : NSObject <CKPropertiesDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *capabilitySet;
@property (readonly, copy, nonatomic) NSDate *capabilitySetSavedDate;
@property (copy, nonatomic) NSDate *usageSavedDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)initWithCapabilitySet:(id)a0 savedDate:(id)a1 usageSavedDate:(id)a2;
- (id)initWithLastSentCapabilitiesAndUsageEntry:(id)a0;

@end
