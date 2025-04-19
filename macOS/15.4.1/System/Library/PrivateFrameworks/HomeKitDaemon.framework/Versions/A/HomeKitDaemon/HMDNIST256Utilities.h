@interface HMDNIST256Utilities : HMFObject

+ (id)createNIST256KeyPair;
+ (id)identifier16BytesForKey:(id)a0;
+ (id)identifier8BytesForKey:(id)a0;
+ (id)privateKeyFromKeyPairExternalRepresentation:(id)a0;
+ (id)publicKeyExternalRepresentationFromKeyPairExternalRepresentation:(id)a0;
+ (id)publicKeyFromKeyPairExternalRepresentation:(id)a0;

@end
