@class NSString, NSArray;

@interface AISSetupReportLocaleInfo : NSObject

@property (copy, nonatomic) NSString *localeID;
@property (copy, nonatomic) NSArray *languages;
@property (copy, nonatomic) NSArray *keyboards;
@property (readonly, copy, nonatomic) NSString *preferredLanguage;

- (void).cxx_destruct;

@end
