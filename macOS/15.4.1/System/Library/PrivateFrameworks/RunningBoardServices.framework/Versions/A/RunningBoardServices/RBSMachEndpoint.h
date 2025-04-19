@class NSString, NSObject;
@protocol OS_xpc_object;

@interface RBSMachEndpoint : NSObject <RBSXPCSecureCoding> {
    NSObject<OS_xpc_object> *_port;
    NSObject<OS_xpc_object> *_getterCache_endpoint;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_hasCheckedEndpoint;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isNonLaunching) BOOL nonLaunching;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRBSXPCSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)_copy;
- (id)_initWithName:(id)a0 nonLaunching:(BOOL)a1 port:(id)a2;
- (BOOL)_isCachedPortValid;
- (BOOL)_isEquivalentToEndpoint:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;

@end
