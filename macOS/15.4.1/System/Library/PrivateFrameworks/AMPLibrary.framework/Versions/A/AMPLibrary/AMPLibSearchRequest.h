@class NSArray, NSString;

@interface AMPLibSearchRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *scopes;
@property (nonatomic) unsigned long long mediaDomains;
@property (nonatomic) unsigned long long mediaKinds;
@property (nonatomic) unsigned long long deviceCapabilities;
@property (nonatomic) unsigned int maximumResultsPerScope;
@property (copy, nonatomic) NSString *searchString;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)configureWithDomains:(unsigned long long)a0 mediaKinds:(unsigned long long)a1 deviceCapabilities:(unsigned long long)a2;

@end
