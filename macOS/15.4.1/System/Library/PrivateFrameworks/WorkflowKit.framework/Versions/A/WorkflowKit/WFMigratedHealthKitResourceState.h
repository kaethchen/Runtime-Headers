@class NSSet;

@interface WFMigratedHealthKitResourceState : NSObject <NSSecureCoding> {
    NSSet *entries;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
