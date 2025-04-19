@interface _LSDDeviceIdentifierService : _LSDService

+ (void)clearBaseSecret;
+ (id)XPCInterface;
+ (id)baseSecret;
+ (Class)clientClass;
+ (unsigned short)connectionType;
+ (struct __CFDictionary { } *)getBaseSecretCommonQueryDictionary;

- (id)initWithXPCListener:(id)a0;

@end
