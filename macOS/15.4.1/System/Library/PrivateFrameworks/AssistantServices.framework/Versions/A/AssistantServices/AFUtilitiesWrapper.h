@interface AFUtilitiesWrapper : NSObject

+ (BOOL)deviceSupportsOnDeviceDictation;
+ (BOOL)deviceSupportsSiriUOD;
+ (BOOL)isDictationLanguageInstalledForOnDeviceDictation:(id)a0 offlineDictationStatus:(id)a1;
+ (BOOL)offlineDictationCapable;
+ (BOOL)shouldRunAsrOnServerForUOD;
+ (BOOL)uodStatusSupportedFull:(id)a0 languageCode:(id)a1;

@end
