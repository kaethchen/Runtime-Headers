@interface LACLocalization : NSObject

+ (id)faceID;
+ (id)opticID;
+ (id)touchID;
+ (id)dtoErrorBiometryNotEnrolled;
+ (id)dtoErrorDeviceTypeNotSupported;
+ (id)dtoErrorPasscodeNotSet;
+ (id)dtoSecurityDelayEndedText:(id)a0 duration:(double)a1;
+ (id)localizedStringWithKey:(id)a0 value:(id)a1 table:(id)a2;
+ (id)localizedStringWithKey:(id)a0 value:(id)a1 tableSuffix:(id)a2;

@end
