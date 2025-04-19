@interface AFLocalSpeechRecognitionSamplingUtilities : AFSamplingUtilities

+ (id)component;
+ (long long)calculateFileNameAgeInDays:(id)a0;
+ (id)dateFromFileName:(id)a0;
+ (BOOL)isFileNameValid:(id)a0;
+ (id)sampledCachesSubDirectoryPath;
+ (id)sampledSubDirectoryNameFormat;
+ (id)sampledSubDirectoryPath;
+ (id)samplingDateAsString;

@end
