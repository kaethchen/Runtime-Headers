@interface NPUtilities : NSObject

+ (int)pidFromAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)createMaskedIPv4Address:(id)a0 prefix:(unsigned long long)a1;
+ (void)parseXTimeout:(id)a0 hardTTLInSeconds:(double *)a1;
+ (id)createMaskedIPv6Address:(id)a0 prefix:(unsigned long long)a1;
+ (long long)certificateDateIsValid:(struct __SecCertificate { } *)a0;
+ (BOOL)compareAddressEndpoints:(id)a0 endpoint2:(id)a1 addressOnly:(BOOL)a2;
+ (id)connectionInfoToDict:(id)a0 dictionary:(id)a1;
+ (id)copyBase64HeaderValueFromData:(id)a0;
+ (id)copyCurrentNetworkCharacteristicsForPath:(id)a0;
+ (id)copyDataFromKeychainWithIdentifier:(id)a0 accountName:(id)a1;
+ (id)copyDataHexString:(id)a0;
+ (id)copyItemIdentifiersFromKeychainWithAccountName:(id)a0;
+ (struct __SecKey { } *)copyKeyFromKeychainWithIdentifier:(id)a0;
+ (id)copyNetworkDescription:(id)a0;
+ (id)copyTrueClientIPAddressFromPreferences;
+ (id)copyUUIDsForSigningIdentifier:(id)a0 executablePath:(id)a1;
+ (id)endpointFromString:(id)a0 defaultPortString:(id)a1;
+ (id)getHashForObject:(id)a0;
+ (id)getInterfaceName:(long long)a0;
+ (id)getInterfaceTypeString:(long long)a0;
+ (BOOL)hasPacketDrop:(id)a0;
+ (id)hexDumpBytes:(const void *)a0 length:(unsigned long long)a1;
+ (long long)interfaceTypeOfInterface:(id)a0;
+ (long long)interfaceTypeOfNWInterface:(id)a0;
+ (id)machoUUIDFromPID:(int)a0;
+ (id)mergeHTTPHeaders:(id)a0 headerOverrides:(id)a1;
+ (id)parseXHost:(id)a0;
+ (unsigned long long)parseXRTT:(id)a0;
+ (void)postNotification:(id)a0 value:(unsigned long long)a1;
+ (BOOL)printDictionaryAsJson:(id)a0 debugName:(id)a1;
+ (long long)protocolTypeFromPath:(id)a0 endpoint:(id)a1;
+ (void)removeDataFromKeychainWithIdentifier:(id)a0;
+ (void)removeDataFromKeychainWithIdentifier:(id)a0 accountName:(id)a1;
+ (void)removeKeyFromKeychainWithIdentifier:(id)a0;
+ (BOOL)rollDiceWithSuccessRatio:(id)a0;
+ (void)saveDataToKeychain:(id)a0 withIdentifier:(id)a1 accountName:(id)a2;
+ (void)saveKeyToKeychain:(struct __SecKey { } *)a0 withIdentifier:(id)a1;
+ (id)sharedEmphemeralSession;
+ (id)stringFromLinkQualityValue:(int)a0;
+ (id)stripWhitespace:(id)a0;
+ (id)timestampIdentifierToName:(unsigned long long)a0;
+ (unsigned long long)totalDataInKeychainWithIdentifier:(id)a0;

@end
