@class NSString;

@interface CNLDAPServices : NSObject <CNLDAPServices>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultServices;

- (id)copy;
- (id)ldap_connection_create_with_url:(id)a0;
- (id)ldap_connection_query_create:(id)a0 :(int)a1 :(int)a2 :(id)a3 :(id)a4 :(id)a5 :(unsigned int)a6 :(BOOL)a7 :(id /* block */)a8 :(id /* block */)a9;
- (void)ldap_connection_set_disconnect_handler:(id)a0 :(id /* block */)a1;
- (void)ldap_connection_start:(id)a0 :(int)a1 :(id /* block */)a2;
- (void)ldap_operation_cancel:(id)a0;

@end
