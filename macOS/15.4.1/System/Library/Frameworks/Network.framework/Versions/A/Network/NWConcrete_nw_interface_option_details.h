@class NSString, NWConcrete_nw_interface, NSObject;
@protocol OS_nw_endpoint, OS_dispatch_data, OS_nw_path_evaluator;

@interface NWConcrete_nw_interface_option_details : NSObject <OS_nw_interface_option_details> {
    NWConcrete_nw_interface *interface;
    NSObject<OS_nw_path_evaluator> *evaluator;
    NSObject<OS_nw_endpoint> *remote;
    unsigned char nexus_agent[16];
    char priority;
    NSObject<OS_dispatch_data> *local_cid;
    NSObject<OS_dispatch_data> *remote_cid;
    NSObject<OS_dispatch_data> *initial_data;
    int sockfd;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;

@end
