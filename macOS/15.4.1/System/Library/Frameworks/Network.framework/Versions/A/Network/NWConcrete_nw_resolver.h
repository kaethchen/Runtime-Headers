@class NSString, NSObject;
@protocol OS_nw_browser, OS_dispatch_group, OS_nw_context, OS_nw_endpoint, OS_nw_parameters, OS_dnssd_getaddrinfo, OS_dispatch_queue, OS_nw_array, OS_nw_path, OS_nw_interface;

@interface NWConcrete_nw_resolver : NSObject <OS_nw_resolver> {
    int status;
    struct mutex { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_lock; } lock;
    NSObject<OS_nw_parameters> *parameters;
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_context> *context;
    NSObject<OS_dispatch_group> *cancel_group;
    NSObject<OS_dnssd_getaddrinfo> *gai;
    unsigned int dns_service_id;
    struct _DNSServiceRef_t { } *dns_service;
    struct _DNSServiceRef_t { } *dns_service_secondary_pointer;
    unsigned int forced_protocol;
    int dns_error;
    unsigned short flags;
    id /* block */ update_block;
    id /* block */ cancel_handler;
    NSObject<OS_dispatch_queue> *client_queue;
    NSObject<OS_nw_browser> *awdl_trigger_browser;
    void *query_timer;
    void *delayed_reporting_timer;
    NSObject<OS_nw_array> *endpoint_array;
    NSObject<OS_nw_array> *non_preferred_endpoint_array;
    void *non_preferred_timer;
    id /* block */ alternative_handler;
    NSObject<OS_nw_array> *services;
    NSObject<OS_nw_array> *alternative_endpoints;
    NSObject<OS_nw_array> *alternative_protocols;
    NSObject<OS_nw_path> *path;
    NSObject<OS_nw_interface> *path_required_interface;
    NWConcrete_nw_resolver *internally_retained_object;
    char *extended_dns_error_extra_text;
    unsigned char selected_resolver_config[16];
    int result_protocol;
    int result_provider;
    char log_str[84];
    unsigned int unique_id;
    unsigned short extended_dns_error_code;
    unsigned char is_custom_resolver : 1;
    unsigned char used_local_cache : 1;
    unsigned char ipv4_used_resolver_cache : 1;
    unsigned char ipv6_used_resolver_cache : 1;
    unsigned char local_only : 1;
    unsigned char suppress_logging : 1;
    unsigned char has_ipv4 : 1;
    unsigned char has_ipv6 : 1;
    unsigned char has_nat64_prefixes : 1;
    unsigned char svcb_requested : 1;
    unsigned char svcb_received : 1;
    unsigned char svcb_dohuri : 1;
    unsigned char is_standalone : 1;
    unsigned char has_oblivious_config : 1;
    unsigned char config_allows_failover : 1;
    unsigned char oblivious_config_fell_back : 1;
    unsigned char has_completed_preferred_weighting : 1;
    unsigned char use_persistent_cache : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id).cxx_construct;

@end
