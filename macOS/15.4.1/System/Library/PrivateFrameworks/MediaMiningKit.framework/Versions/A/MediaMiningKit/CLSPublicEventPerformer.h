@class NSString;

@interface CLSPublicEventPerformer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *iTunesIdentifier;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLocalizedName:(id)a0 iTunesIdentifier:(id)a1;

@end
