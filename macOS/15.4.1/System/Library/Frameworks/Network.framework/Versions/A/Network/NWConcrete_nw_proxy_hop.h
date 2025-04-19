@class NSString, NSObject;
@protocol OS_nw_protocol_options, OS_nw_endpoint;

@interface NWConcrete_nw_proxy_hop : NSObject <OS_nw_proxy_hop> {
    unsigned char resumable_session_agent[16];
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_endpoint> *fallback_endpoint;
    NSObject<OS_nw_protocol_options> *options;
    NSObject<OS_nw_protocol_options> *tls_options;
    struct __CFArray { } *raw_public_keys;
    struct __CFData { } *client_identity_persistent_reference;
    struct __CFArray { } *client_certificates;
    unsigned char supports_raw_ip : 1;
    unsigned char supports_resumption : 1;
    unsigned char supports_l4s : 1;
    unsigned char enable_multipath : 1;
    unsigned char trust_certs : 1;
    unsigned char fallback_only : 1;
    unsigned char supports_udp_listen : 1;
    unsigned char use_x25519 : 1;
    unsigned char enable_demux : 1;
    unsigned char supports_udp_proxying_over_http2 : 1;
    unsigned char client_identity_is_raw_public_key : 1;
    unsigned char use_pqtls : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
