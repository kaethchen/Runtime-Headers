@class NSDictionary;

@interface DNDAppConfigurationTargetContentIdentifierPrefixesBox : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSDictionary *appConfigurationTargetContentIdentifierPrefixesForModeIdentifier;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
