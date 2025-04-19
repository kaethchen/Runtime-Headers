@class NSString, NSMutableDictionary, NSObject, NWConcrete_nw_connection;
@protocol OS_nw_path_evaluator, OS_nw_resolver, OS_nw_dictionary, OS_nw_endpoint, OS_nw_parameters, OS_nw_listener, OS_nw_array;

@interface NWConcrete_nw_candidate_manager : NSObject <OS_nw_candidate_manager> {
    unsigned long long log_id;
    NSObject<OS_nw_endpoint> *ids_endpoint;
    NSObject<OS_nw_dictionary> *ids_resolve_registrations;
    NSMutableDictionary *ids_candidates;
    NSObject<OS_nw_endpoint> *service;
    NSObject<OS_nw_resolver> *service_resolver;
    NSObject<OS_nw_resolver> *awdl_service_resolver;
    NSObject<OS_nw_endpoint> *awdl_endpoint;
    NSObject<OS_nw_listener> *listener;
    NSObject<OS_nw_parameters> *parameters;
    NSMutableDictionary *hostname_resolvers;
    void *lost_path_timer;
    NSObject<OS_nw_endpoint> *original_remote_endpoint;
    id /* block */ add_eligible_details;
    id /* block */ remove_eligible_details;
    id /* block */ modify_ids_parameters;
    NWConcrete_nw_connection *connection;
    NSObject<OS_nw_array> *candidates;
    int state;
    id /* block */ state_handler;
    id /* block */ new_connection_handler;
    NSObject<OS_nw_path_evaluator> *ids_path_evaluator;
    unsigned char currently_using_awdl : 1;
    unsigned char should_connect : 1;
    unsigned char monitor_started : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init:(id)a0;

@end
