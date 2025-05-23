@class NSString, NSObject;
@protocol OS_nw_authentication_credential, OS_xpc_object, OS_nw_dictionary, OS_nw_endpoint, OS_nw_agent, OS_nw_array;

@interface NWConcrete_nw_proxy_config : NSObject <OS_nw_proxy_config> {
    NSObject<OS_nw_dictionary> *stacks;
    NSObject<OS_xpc_object> *proxied_transports;
    NSObject<OS_xpc_object> *required_protocols;
    NSObject<OS_xpc_object> *remove_protocols;
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_array> *resolved_endpoints;
    unsigned char identifier[16];
    unsigned char fallback_agent_uuid[16];
    NWConcrete_nw_proxy_config *fallback_config;
    NSObject<OS_nw_agent> *agent;
    NSObject<OS_nw_authentication_credential> *credential;
    NSObject<OS_xpc_object> *pac_script;
    NSObject<OS_xpc_object> *match_domains;
    NSObject<OS_xpc_object> *excluded_domains;
    NSObject<OS_xpc_object> *preferred_domains;
    NSObject<OS_xpc_object> *alternate_agents;
    int mode;
    int type;
    int multipath_service;
    unsigned int generation;
    unsigned short config_epoch;
    unsigned char is_privacy_proxy : 1;
    unsigned char privacy_proxy_fail_open : 1;
    unsigned char ignore_privacy_stance : 1;
    unsigned char prohibit_direct : 1;
    unsigned char supports_bonjour : 1;
    unsigned char match_address_family : 1;
    unsigned char prohibit_unsatisfied_paths : 1;
    unsigned char exclude_simple_hostnames : 1;
    unsigned char force_tfo : 1;
    unsigned char force_multipath : 1;
    unsigned char apply_tfo : 1;
    unsigned char disable_tfo_cookie : 1;
    unsigned char override_opaque_https : 1;
    unsigned char is_fallback : 1;
    unsigned char use_fast_fallback : 1;
    unsigned char use_over_privacy_proxy : 1;
    unsigned char require_domain_match : 1;
    unsigned char is_companion_proxy : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
