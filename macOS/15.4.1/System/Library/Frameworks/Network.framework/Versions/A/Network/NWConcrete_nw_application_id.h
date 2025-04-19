@class NSString;

@interface NWConcrete_nw_application_id : NSObject <OS_nw_application_id> {
    struct mutex { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_lock; } lock;
    unsigned char uuid[16];
    unsigned int signature_length;
    unsigned char signature_data[32];
    char *originating_process;
    char *bundle_id;
    unsigned char persona_id[16];
    BOOL is_bundle_id_external;
    struct { unsigned int val[8]; } audit_token;
    int pid;
    int system_service;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
