@class NSString;

@interface SUOSUMSUScanOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL background;
@property BOOL mdmInitiated;
@property BOOL buddyInitiated;
@property (retain) NSString *requestedProductMarketingVersion;

+ (id)optionsWithBackground:(BOOL)a0 mdmInitiated:(BOOL)a1;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
