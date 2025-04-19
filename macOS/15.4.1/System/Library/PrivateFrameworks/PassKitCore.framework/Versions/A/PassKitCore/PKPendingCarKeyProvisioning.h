@class PKAddCarKeyPassConfiguration;

@interface PKPendingCarKeyProvisioning : PKPendingProvisioning <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKAddCarKeyPassConfiguration *configuration;

+ (id)uniqueIdentifierForBrandIdentifier:(id)a0 pairedReaderIdentifier:(id)a1;
+ (id)uniqueIdentifierForCarKeyConfiguration:(id)a0;
+ (id)uniqueIdentifierForSubcredential:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)type;
- (BOOL)representsPass:(id)a0;
- (void)_copyIntoPendingProvision:(id)a0;
- (id)initWithCarKeyConfiguration:(id)a0;

@end
