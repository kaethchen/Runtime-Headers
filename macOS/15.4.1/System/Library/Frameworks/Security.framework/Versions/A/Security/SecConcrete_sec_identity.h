@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_data;

@interface SecConcrete_sec_identity : NSObject <OS_sec_identity> {
    struct __SecIdentity { } *identity;
    struct __CFArray { } *certs;
    id /* block */ sign_block;
    id /* block */ decrypt_block;
    NSObject<OS_dispatch_queue> *operation_queue;
    unsigned short type;
    NSObject<OS_dispatch_data> *spake2_context;
    NSObject<OS_dispatch_data> *client_identity;
    NSObject<OS_dispatch_data> *server_identity;
    NSObject<OS_dispatch_data> *client_password_verifier;
    NSObject<OS_dispatch_data> *server_password_verifier;
    NSObject<OS_dispatch_data> *registration_record;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCertificates:(struct __CFArray { } *)a0 signBlock:(id /* block */)a1 decryptBlock:(id /* block */)a2 queue:(id)a3;
- (id)initWithIdentity:(struct __SecIdentity { } *)a0;
- (id)initWithIdentityAndCertificates:(struct __SecIdentity { } *)a0 certificates:(struct __CFArray { } *)a1;
- (id)initWithSPAKE2PLUSV1Context:(id)a0 clientIdentity:(id)a1 serverIdentity:(id)a2 clientPasswordVerifier:(id)a3 serverPasswordVerifier:(id)a4 registrationRecord:(id)a5;

@end
