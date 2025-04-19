@class NSDictionary, NSString;

@interface _EARLanguageDetectorV2Result : NSObject

@property (copy, nonatomic) NSDictionary *confidences;
@property (nonatomic) unsigned long long detectedLanguage;
@property (copy, nonatomic) NSString *dominantLocale;

- (void).cxx_destruct;

@end
