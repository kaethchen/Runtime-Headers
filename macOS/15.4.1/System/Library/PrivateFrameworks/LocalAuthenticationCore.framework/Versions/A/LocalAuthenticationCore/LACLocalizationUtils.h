@interface LACLocalizationUtils : NSObject

+ (BOOL)_shouldUseDeviceVariantForKey:(id)a0;
+ (id)decodeLocalizationKeyFromString:(id)a0 shouldUseDeviceVariant:(BOOL *)a1;
+ (id)encodeLocalizationKey:(id)a0;
+ (id)encodeLocalizationKey:(id)a0 shouldUseDeviceVariant:(BOOL)a1;
+ (BOOL)isLocalizationKey:(id)a0;

@end
