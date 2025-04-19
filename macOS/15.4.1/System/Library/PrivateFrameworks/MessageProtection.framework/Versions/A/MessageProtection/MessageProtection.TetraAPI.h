@interface MessageProtection.TetraAPI : NSObject

+ (BOOL)markForStateResetWithOurURI:(id)a0 ourPushToken:(id)a1 theirURI:(id)a2 theirPushToken:(id)a3 theirRegistration:(id)a4 signedByOur:(id)a5;
+ (void)openWithMessage:(id)a0 authenticatedData:(id)a1 guid:(id)a2 sendingURI:(id)a3 sendingPushToken:(id)a4 receivingURI:(id)a5 receivingPushToken:(id)a6 theirIdentity:(id)a7 signedBy:(id)a8 tetraVersion:(unsigned int)a9 ourPrekeys:(id)a10 ourSigningPublicKeyCompactRepresentation:(id)a11 decryptionBlock:(id /* block */)a12;
+ (id)sealScheduledWithMessage:(id)a0 authenticatedData:(id)a1 receiverRegistration:(id)a2 sendingURI:(id)a3 sendingPushToken:(id)a4 receivingURI:(id)a5 receivingPushToken:(id)a6 encryptedAttributes:(id)a7 receiverIdentity:(id)a8 senderIdentity:(id)a9 signedBy:(id)a10 error:(id *)a11;
+ (id)sealWithMessage:(id)a0 authenticatedData:(id)a1 guid:(id)a2 sendingURI:(id)a3 sendingPushToken:(id)a4 receivingURI:(id)a5 receivingPushToken:(id)a6 receiverRegistration:(id)a7 encryptedAttributes:(id)a8 resetState:(BOOL)a9 signedBy:(id)a10 error:(id *)a11;

- (id)init;

@end
