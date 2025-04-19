@class NSSet;

@interface SGEventDonationEnablementManager : NSObject

@property (retain, nonatomic) NSSet *llmPreferredLocales;
@property (retain, nonatomic) NSSet *textMessageUnsupportedCategories;
@property (retain, nonatomic) NSSet *overallUnsupportedCategories;
@property (retain, nonatomic) NSSet *textMessageUnsupportedStatuses;
@property (retain, nonatomic) NSSet *overallUnsupportedStatuses;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLLMPreferredLocales:(id)a0;
- (BOOL)isLLMPreferredForLocale;
- (BOOL)isLLMPreferredForLocale:(id)a0;
- (BOOL)isUnsupportedEventCategoryStatusForTextMessage:(id)a0;

@end
