@class NSString, NSArray, NSObject;
@protocol OS_nw_protocol_instance_registrar, OS_nw_txt_record, OS_nw_protocol_definition, OS_nw_context, OS_dispatch_data, OS_nw_array, OS_xpc_object, OS_nw_interface;

@interface NWConcrete_nw_endpoint : NSObject <OS_nw_endpoint> {
    NSObject<OS_nw_context> *context;
    NSObject<OS_nw_interface> *interface;
    int interface_type;
    unsigned char agent_identifier[16];
    NSArray *public_keys;
    NSString *ns_description;
    char *description;
    NSString *ns_redacted_description;
    char *redacted_description;
    char *known_tracker_name;
    char *tracker_owner;
    char *device_id;
    NWConcrete_nw_endpoint *parent_endpoint;
    NSObject<OS_nw_array> *cname_array;
    struct nw_endpoint_alterative_s { struct { struct nw_endpoint_alterative_s *tqe_next; struct nw_endpoint_alterative_s **tqe_prev; } chain; NWConcrete_nw_endpoint *endpoint; NSObject<OS_nw_protocol_definition> *applicable_protocol; } first_alternative;
    struct { struct nw_endpoint_alterative_s *tqh_first; struct nw_endpoint_alterative_s **tqh_last; } alternative_list;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } endpoint_lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } description_lock;
    NSObject<OS_nw_txt_record> *txt_record;
    NSObject<OS_xpc_object> *signature;
    struct nw_hash_table { } *associations;
    NSObject<OS_nw_protocol_instance_registrar> *registrar;
    NSObject<OS_nw_array> *endpoint_edges;
    int dns_failure_reason;
    unsigned short alternate_port;
    unsigned char selected_key;
    unsigned char is_local_domain : 1;
    unsigned char parent_is_proxy : 1;
    unsigned char is_registered : 1;
    unsigned char description_used : 1;
    unsigned char redacted_description_used : 1;
    unsigned char do_not_redact_description : 1;
    unsigned char approved_app_domain : 1;
    unsigned char can_block_request : 1;
}

@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) const char *domainForPolicy;
@property (readonly, nonatomic) const char *hostname;
@property (readonly, nonatomic) unsigned short port;
@property (retain, nonatomic) NSObject<OS_dispatch_data> *echConfig;
@property (nonatomic) unsigned short priority;
@property (nonatomic) unsigned short weight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)copyDictionary;
- (id)redactedDescription;
- (id).cxx_construct;
- (unsigned long long)getHash;
- (id)copyEndpoint;
- (char *)createDescription:(BOOL)a0;
- (BOOL)isEqualToEndpoint:(id)a0 matchFlags:(unsigned char)a1;

@end
