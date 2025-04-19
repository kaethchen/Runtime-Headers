@class NSNumber, NSString;

@interface ASTSuite : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *suiteID;
@property (retain, nonatomic) NSString *suiteNameLocalizedString;
@property (retain, nonatomic) NSString *suiteDescriptionLocalizedString;
@property (retain, nonatomic) NSString *estimatedCompletionTimeLocalizedString;
@property (retain, nonatomic) NSString *primaryAssetLocator;
@property (retain, nonatomic) NSString *secondaryAssetLocator;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithId:(id)a0 suiteNameLocalizedString:(id)a1 suiteDescriptionLocalizedString:(id)a2 estimatedCompletionTimeLocalizedString:(id)a3 primaryAssetLocator:(id)a4 secondaryAssetLocator:(id)a5;

@end
