@class NSString;

@interface _PKProvisioningRequirementsContainer : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ requirements;
    void /* unknown type, empty encoding */ provisioningSID;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *provisioningSID;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)containerMinus:(id)a0;
- (BOOL)containsNotManagedAccount;
- (id)displayableError;

@end
