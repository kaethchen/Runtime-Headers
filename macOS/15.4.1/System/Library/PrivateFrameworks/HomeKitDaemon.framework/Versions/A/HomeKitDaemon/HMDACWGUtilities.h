@interface HMDACWGUtilities : HMFObject

+ (id)createGroupResolvingKey;
+ (id)createIssuerKeyV2KeychainItemWithKeyPairExternalRepresentation:(id)a0 generationCounter:(long long)a1 homeUUID:(id)a2 dateProvider:(id)a3 accountIdentifier:(id)a4;
+ (id)findWinningIssuerKeyForHomeUUID:(id)a0 withKeys:(id)a1 accountIdentifier:(id)a2;
+ (id)keyPairExternalRepresentationFromKeychainItem:(id)a0;
+ (id)keychainIdentifierForPublicKeyExternalRepresentation:(id)a0;

@end
