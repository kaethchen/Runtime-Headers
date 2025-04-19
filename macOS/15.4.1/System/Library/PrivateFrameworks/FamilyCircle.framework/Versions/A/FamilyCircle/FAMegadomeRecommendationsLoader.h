@class NSString;

@interface FAMegadomeRecommendationsLoader : NSObject <FAMegadomeRecommendationLoading>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)normalizedPhoneNumbersForPhoneNumbers:(id)a0;
+ (id)taggingOptions;

@end
