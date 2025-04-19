@class NSString;

@interface CNLDAPSearchBase : NSObject

@property (copy) NSString *distinguishedName;
@property unsigned long long scope;

+ (id)searchBaseWithDistinguishedName:(id)a0 scope:(unsigned long long)a1;

- (void).cxx_destruct;

@end
