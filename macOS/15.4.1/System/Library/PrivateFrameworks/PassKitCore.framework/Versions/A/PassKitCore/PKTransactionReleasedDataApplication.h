@class NSString;

@interface PKTransactionReleasedDataApplication : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long client;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *usageDescription;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqualToReleasedDataApplication:(id)a0;

@end
