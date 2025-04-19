@class NSString, NSDictionary;

@interface AKAppleIDPasskeySetupContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSDictionary *appProvidedData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAltDSID:(id)a0;

@end
