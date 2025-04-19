@class SFUITTRReport;

@interface SFUITTRReporter : NSObject

@property (readonly, nonatomic) SFUITTRReport *internalReport;

+ (id)reporterForPeopleSuggestions;

- (void).cxx_destruct;
- (void)report;
- (id)initWithReport:(id)a0;
- (id)_createSchemeURL;

@end
