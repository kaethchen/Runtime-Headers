@class NSObject;
@protocol CNLDAPServices, OS_ldap_connection;

@interface CNLDAPConnection : NSObject

@property (readonly, nonatomic) id<CNLDAPServices> ldapServices;
@property (readonly, nonatomic) NSObject<OS_ldap_connection> *connection;

+ (id)connectionWithURLString:(id)a0;
+ (id)connectionWithURLString:(id)a0 ldapServices:(id)a1;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)connect;
- (id)executeFetchRequest:(id)a0;
- (void)executeFetchRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithURL:(id)a0 ldapServices:(id)a1;
- (id)observableWithFetchRequest:(id)a0;
- (id)observableWithFilter:(id)a0 baseDN:(id)a1 scope:(unsigned long long)a2 resultLimit:(unsigned int)a3 attributes:(id)a4;

@end
