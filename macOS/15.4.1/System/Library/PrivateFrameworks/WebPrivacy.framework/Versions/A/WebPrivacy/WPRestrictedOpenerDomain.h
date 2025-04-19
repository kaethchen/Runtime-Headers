@class NSString;

@interface WPRestrictedOpenerDomain : NSObject

@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) long long openerType;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDomain:(id)a0 openerType:(long long)a1;

@end
