@class NSString, NSObject;
@protocol OS_nw_endpoint;

@interface NWConcrete_nw_authentication_protection_space : NSObject <OS_nw_authentication_protection_space> {
    NSObject<OS_nw_endpoint> *endpoint;
    char *realm;
    int type;
    unsigned char is_proxy : 1;
    unsigned char proxy_origin_is_cleartext : 1;
    unsigned char __pad_bits : 6;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;

@end
