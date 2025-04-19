@class NSString;

@interface WPStorageAccessUserAgentStringQuirk : NSObject

@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSString *userAgentString;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDomain:(id)a0 withUserAgentString:(id)a1;

@end
