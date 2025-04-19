@class NSDictionary;

@interface LAExtendedRequirement : NSObject <LAACLSerializable> {
    NSDictionary *_constraint;
}

@property (class, readonly) LAExtendedRequirement *applicationRemainsForegroundRequirement;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithACLCoder:(id)a0;

@end
