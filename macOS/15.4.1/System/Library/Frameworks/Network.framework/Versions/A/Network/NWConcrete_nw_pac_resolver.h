@class NSString, NSObject;
@protocol OS_nw_context;

@interface NWConcrete_nw_pac_resolver : NSObject <OS_nw_pac_resolver> {
    id /* block */ result_block;
    NSObject<OS_nw_context> *context;
    struct __CFURL { } *endpointURL;
    struct __CFURL { } *pacURL;
    struct __CFString { } *pacScript;
    struct __CFData { } *auditToken;
    struct __CFString { } *bundleIdentifier;
    struct __CFRunLoopSource { } *pacResolver;
    struct __CFRunLoopTimer { } *timeoutTimer;
    struct mutex { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_lock; } runloopLock;
    char logging_id_str[75];
    unsigned char https_is_opaque : 1;
    unsigned char use_tls : 1;
    unsigned char should_trust_invalid_certs : 1;
    unsigned char is_dry_run : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
