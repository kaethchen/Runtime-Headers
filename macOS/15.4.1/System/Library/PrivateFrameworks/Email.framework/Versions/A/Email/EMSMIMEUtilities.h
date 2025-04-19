@interface EMSMIMEUtilities : NSObject

+ (unsigned long long)_encryptionLevelForSender:(id)a0;
+ (BOOL)_isICloudAddress:(id)a0;
+ (unsigned long long)_messageSecurityLevelViaOtherDevices;
+ (unsigned long long)encryptionLevelForSender:(id)a0 forAdvertisement:(BOOL)a1 useGCM:(BOOL *)a2 encryptSubject:(BOOL *)a3;

@end
