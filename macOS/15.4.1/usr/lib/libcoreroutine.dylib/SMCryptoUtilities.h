@interface SMCryptoUtilities : NSObject

+ (id)getRandomBytes:(unsigned long long)a0;
+ (id)createAllowReadToken;
+ (id)createSafetyCacheKey;
+ (id)decryptSafetyCache:(id)a0 key:(id)a1 sessionID:(id)a2 role:(id)a3 device:(long long)a4 metricsDict:(id *)a5 hashString:(id *)a6;
+ (id)decryptSafetyCache:(id)a0 withKey:(id)a1;
+ (id)encryptSafetyCache:(id)a0 withKey:(id)a1;
+ (id)getDeserializedJsonDict:(id)a0;
+ (id)getSerializedJsonData:(id)a0;

@end
