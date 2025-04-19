@class NSString, NWConcrete_nw_connection, NSObject;
@protocol OS_nw_error, OS_nw_dictionary, OS_sec_identity, OS_nw_interface, OS_dispatch_queue, OS_nw_masque_server;

@interface NWConcrete_nw_masque_connection : NSObject <OS_nw_masque_connection> {
    unsigned long long mc_id;
    unsigned long long mc_group_id;
    struct mutex { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_lock; } mc_lock;
    NSObject<OS_dispatch_queue> *mc_queue;
    NSObject<OS_nw_masque_server> *mc_parent;
    NWConcrete_nw_connection *mc_in_connection;
    NSObject<OS_nw_dictionary> *mc_connection_pairs;
    NSObject<OS_nw_dictionary> *mc_listener_pairs;
    NSObject<OS_sec_identity> *mc_reverse_proxy_identity;
    NSObject<OS_nw_interface> *mc_outbound_interface;
    id /* block */ mc_outer_connection_handler;
    BOOL mc_drop_requests;
    BOOL mc_sent_secondary_certificate;
    id /* block */ mc_cancel;
    unsigned char mc_state;
    NSObject<OS_nw_error> *mc_error;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
