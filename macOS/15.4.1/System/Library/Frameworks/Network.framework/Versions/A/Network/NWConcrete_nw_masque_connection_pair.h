@class NSString, NWConcrete_nw_masque_connection, NWConcrete_nw_connection, NSObject;
@protocol OS_nw_content_context, OS_dispatch_group, OS_dispatch_source, OS_nw_endpoint, OS_nw_protocol_options, OS_sec_identity, OS_nw_array;

@interface NWConcrete_nw_masque_connection_pair : NSObject <OS_nw_masque_connection_pair> {
    struct mutex { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_lock; } mcp_lock;
    NWConcrete_nw_masque_connection *mcp_parent;
    NWConcrete_nw_connection *mcp_inner_server_cid_connection;
    NWConcrete_nw_connection *mcp_inner_direct_send_connection;
    NSObject<OS_nw_array> *mcp_inner_direct_receive_connections;
    NWConcrete_nw_connection *mcp_outer_connection;
    NSObject<OS_nw_content_context> *mcp_inner_response_context;
    id /* block */ mcp_state_changed_handler;
    unsigned short mcp_client_cid_length;
    unsigned char mcp_client_cid[20];
    unsigned short mcp_virtual_client_cid_length;
    unsigned char mcp_virtual_client_cid[20];
    char mcp_client_cid_header[20];
    unsigned short mcp_server_cid_length;
    unsigned char mcp_server_cid[20];
    char mcp_server_cid_header[20];
    char mcp_datagram_flow_id[8];
    NSObject<OS_nw_protocol_options> *mcp_client_demux_options;
    char mcp_key[17];
    BOOL mcp_sent_response;
    BOOL mcp_closed;
    BOOL mcp_is_datagram;
    BOOL mcp_exclude_proxy_status;
    BOOL mcp_uses_capsules;
    NSObject<OS_nw_endpoint> *mcp_client_endpoint;
    NSObject<OS_dispatch_group> *mcp_close_group;
    NSObject<OS_sec_identity> *mcp_reverse_proxy_identity;
    BOOL mcp_reverse_proxying;
    unsigned int mcp_traffic_class;
    int mcp_require_interface;
    int mcp_multipath_service;
    unsigned short mcp_multipath_alt_port;
    BOOL mcp_prohibit_constrained;
    BOOL mcp_prohibit_expensive;
    BOOL mcp_prohibit_wifi;
    BOOL mcp_prohibit_cellular;
    BOOL mcp_prohibit_wired;
    NSString *mcp_src_bundle_id;
    unsigned short mcp_local_port;
    NSObject<OS_dispatch_source> *mcp_waiting_timer_source;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
