@class NSString, NSObject;
@protocol OS_xpc_object, OS_nw_protocol_stack, OS_nw_endpoint;

@interface NWConcrete_nw_protocol_transform : NSObject <OS_nw_protocol_transform> {
    unsigned char clear_application : 1;
    unsigned char clear_transport : 1;
    unsigned char clear_internet : 1;
    unsigned char no_proxy : 1;
    unsigned char prohibit_direct : 1;
    unsigned char tfo : 1;
    unsigned char tfo_no_cookie : 1;
    unsigned char no_fallback : 1;
    unsigned char fast_open_force_enable : 1;
    unsigned char set_multipath_service : 1;
    unsigned char set_traffic_class : 1;
    unsigned int traffic_class;
    int fallback_mode;
    int multipath_service;
    int data_mode;
    NSObject<OS_nw_endpoint> *replace_endpoint;
    NSObject<OS_xpc_object> *disabled_protocols;
    NSObject<OS_xpc_object> *match_url_schemes;
    NSObject<OS_nw_protocol_stack> *transform_stack;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
