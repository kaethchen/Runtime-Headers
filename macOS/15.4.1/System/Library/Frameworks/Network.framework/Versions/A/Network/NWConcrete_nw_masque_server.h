@class NSString, NSObject;
@protocol OS_nw_protocol_options, OS_sec_identity, OS_nw_listener, OS_nw_parameters, OS_nw_array, OS_dispatch_queue, OS_sec_protocol_options, OS_xpc_object, OS_nw_interface;

@interface NWConcrete_nw_masque_server : NSObject <OS_nw_masque_server> {
    unsigned long long ms_id;
    struct mutex { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_lock; } ms_lock;
    NSObject<OS_dispatch_queue> *ms_queue;
    NSObject<OS_nw_parameters> *ms_parameters;
    NSObject<OS_dispatch_queue> *ms_client_queue;
    id /* block */ ms_state_handler;
    id /* block */ ms_error;
    NSObject<OS_nw_listener> *ms_listener;
    NSObject<OS_nw_array> *ms_groups;
    NSObject<OS_nw_protocol_options> *ms_options;
    id /* block */ ms_proxy_client_connection_event_handler;
    id /* block */ ms_outer_connection_handler;
    NSObject<OS_nw_array> *ms_connections;
    NSObject<OS_nw_interface> *ms_outbound_interface;
    NSObject<OS_xpc_object> *ms_listener_associations_dictionary;
    NSObject<OS_sec_protocol_options> *ms_sec_options;
    NSObject<OS_sec_identity> *ms_reverse_proxy_identity;
    BOOL ms_exclude_proxy_status;
    BOOL ms_sent_secondary_certificate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;

@end
