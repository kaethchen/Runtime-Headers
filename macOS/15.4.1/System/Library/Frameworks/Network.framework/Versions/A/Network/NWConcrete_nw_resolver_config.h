@class NSString, NSObject;
@protocol OS_xpc_object, OS_dispatch_source, OS_nw_fd_wrapper;

@interface NWConcrete_nw_resolver_config : NSObject <OS_nw_resolver_config> {
    struct retained_ptr<NSObject<OS_xpc_object> *> { NSObject<OS_xpc_object> *m_obj; unsigned char m_should_release : 1; unsigned char __pad_bits : 7; unsigned char __pad_bytes[7]; } dictionary;
    unsigned char identifier[16];
    struct retained_ptr<NSObject<OS_dispatch_source> *> { NSObject<OS_dispatch_source> *m_obj; unsigned char m_should_release : 1; unsigned char __pad_bits : 7; unsigned char __pad_bytes[7]; } kernel_event_source;
    struct retained_ptr<NSObject<OS_nw_fd_wrapper> *> { NSObject<OS_nw_fd_wrapper> *m_obj; unsigned char m_should_release : 1; unsigned char __pad_bits : 7; unsigned char __pad_bytes[7]; } kernel_event_wrapper;
    struct retained_ptr<NSObject<OS_nw_fd_wrapper> *> { NSObject<OS_nw_fd_wrapper> *m_obj; unsigned char m_should_release : 1; unsigned char __pad_bits : 7; unsigned char __pad_bytes[7]; } agent_fd;
    struct unfair_mutex { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_mutex; } lock;
    unsigned int generation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
