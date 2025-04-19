@interface TKAhpTools : NSObject

+ (id)buildContextBlob:(id)a0 tokenId:(id)a1 pubKeyHash:(id)a2 wrapHash:(id)a3;
+ (void)getContextBlobValues:(id)a0 userName:(id *)a1 tokenId:(id *)a2 pubKeyHash:(id *)a3 wrapHash:(id *)a4;
+ (id)keychainPassword:(id)a0 pin:(id)a1 keychainPassword:(id)a2 userPassword:(id)a3 pubKeyHash:(id)a4 wrapHash:(id)a5;
+ (id)keychainPassword:(id)a0 pin:(id)a1 keychainPasword:(id)a2 pubKeyHash:(id)a3 wrapHash:(id)a4;

@end
