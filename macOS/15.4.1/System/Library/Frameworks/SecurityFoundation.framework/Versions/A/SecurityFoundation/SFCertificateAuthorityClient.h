@interface SFCertificateAuthorityClient : NSObject {
    id _reserved_SFCollaborationCertificateAuthorityClient;
}

+ (id)sharedCertificateAuthorityClient;

- (id)certificateAuthorityCertificatesFromInvitation:(id)a0 sharedSecret:(id)a1 inputParms:(id)a2 error:(id *)a3;
- (id)certificateSigningRequestWithInvitation:(id)a0 publicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 privateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a2 keychain:(struct __SecKeychain { } *)a3 user:(id)a4 emailAddress:(id)a5 accessRef:(struct __SecAccess { } *)a6 inputParms:(id)a7 error:(id *)a8;

@end
