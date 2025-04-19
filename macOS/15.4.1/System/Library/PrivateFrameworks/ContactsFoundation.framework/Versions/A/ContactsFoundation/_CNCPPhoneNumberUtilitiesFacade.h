@class NSString;

@interface _CNCPPhoneNumberUtilitiesFacade : NSObject

@property (class, readonly) NSString *homeCountryCode;
@property (class, readonly) NSString *currentCountryCode;

+ (id)triage_log;

@end
