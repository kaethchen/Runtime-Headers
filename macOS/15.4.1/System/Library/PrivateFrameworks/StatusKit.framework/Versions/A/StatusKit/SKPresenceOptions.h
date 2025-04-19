@class NSString, IDSURI;

@interface SKPresenceOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isPersonal;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (retain, nonatomic) IDSURI *clientSpecifiedURI;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithServiceIdentifier:(id)a0;

@end
