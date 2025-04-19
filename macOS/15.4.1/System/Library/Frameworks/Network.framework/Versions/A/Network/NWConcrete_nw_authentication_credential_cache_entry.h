@class NSString, NSObject;
@protocol OS_nw_authentication_credential;

@interface NWConcrete_nw_authentication_credential_cache_entry : NSObject <OS_nw_authentication_credential_cache_entry> {
    struct _CFHTTPAuthentication { } *http_authentication;
    NSObject<OS_nw_authentication_credential> *credential;
    int type;
    BOOL for_proxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
