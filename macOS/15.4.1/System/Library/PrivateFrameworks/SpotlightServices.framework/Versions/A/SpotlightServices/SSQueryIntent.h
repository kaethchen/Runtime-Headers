@class SSIntentBasedSectionConfiguration, SSIntentBasedSuggestionsConfiguration;

@interface SSQueryIntent : NSObject

@property (nonatomic) int intentType;
@property (retain, nonatomic) SSIntentBasedSuggestionsConfiguration *suggestionConfig;
@property (retain, nonatomic) SSIntentBasedSectionConfiguration *sectionConfig;

+ (int)intentStrength:(int)a0;
+ (id)intentStrengthString:(int)a0;
+ (id)intentString:(int)a0;

- (void).cxx_destruct;

@end
