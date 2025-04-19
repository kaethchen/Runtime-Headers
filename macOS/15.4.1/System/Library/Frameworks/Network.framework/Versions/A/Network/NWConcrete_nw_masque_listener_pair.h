@class NSString, NWConcrete_nw_masque_connection, NSObject, NWConcrete_nw_connection;
@protocol OS_nw_connection_group, OS_dispatch_group, OS_nw_dictionary, OS_nw_endpoint, OS_nw_array;

@interface NWConcrete_nw_masque_listener_pair : NSObject <OS_nw_masque_listener_pair> {
    struct mutex { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_lock; } mlp_lock;
    NWConcrete_nw_masque_connection *mlp_parent;
    NSObject<OS_nw_connection_group> *mlp_outer_connection_group;
    id /* block */ mlp_state_changed_handler;
    NSObject<OS_nw_dictionary> *mlp_client_demux_options;
    NWConcrete_nw_connection *mlp_inner_direct_send_connection;
    NSObject<OS_nw_array> *mlp_inner_direct_receive_connections;
    char mlp_key[17];
    BOOL mlp_sent_response;
    BOOL mlp_closed;
    BOOL mlp_exclude_proxy_status;
    BOOL mlp_uses_capsules;
    NSObject<OS_nw_endpoint> *mlp_client_endpoint;
    NSObject<OS_dispatch_group> *mlp_close_group;
    unsigned int mlp_traffic_class;
    int mlp_require_interface;
    BOOL mlp_prohibit_constrained;
    BOOL mlp_prohibit_expensive;
    BOOL mlp_prohibit_wifi;
    BOOL mlp_prohibit_cellular;
    BOOL mlp_prohibit_wired;
    NSString *mlp_src_bundle_id;
    NSString *mlp_listener_association;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
