@interface CDPInheritanceTrustController : NSObject

- (void)checkInheritanceKey:(id)a0 inheritanceKeyUUID:(id)a1 completion:(id /* block */)a2;
- (void)createInheritanceKeyWithContext:(id)a0 completion:(id /* block */)a1;
- (void)deleteInheritanceAccessKeyWithContext:(id)a0 completion:(id /* block */)a1;
- (BOOL)isInheritanceAccessKeyValid:(id)a0;
- (void)recoverOctagonWithContext:(id)a0 inheritanceKey:(id)a1 completion:(id /* block */)a2;
- (void)recreateInheritanceKeyWithContext:(id)a0 newOTPeerID:(id)a1 inheritanceKey:(id)a2 completion:(id /* block */)a3;
- (void)validateAccessKey:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;

@end
