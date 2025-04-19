@interface AMDictationServicesSoftLinking : NSObject

+ (void *)framework;
+ (void /* function */ *)SODictationCommandPropertiesRegistered;
+ (void /* function */ *)SODictationSynchronizeOpenFileCommandProperties;
+ (void /* function */ *)SODictationGetURLForOpenFileCommandProperties;
+ (id)kSODictationCustomCommandChangedNotification;
+ (id)kSODictationCustomCommandEnabledKey;
+ (id)kSODictationCustomCommandIdentifierKey;
+ (id)kSODictationCustomCommandTitleKey;
+ (void)softLink;

@end
