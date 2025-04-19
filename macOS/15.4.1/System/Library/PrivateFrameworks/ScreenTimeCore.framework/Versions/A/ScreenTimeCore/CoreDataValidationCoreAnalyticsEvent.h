@class NSString, NSDictionary;

@interface CoreDataValidationCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>

@property (readonly) long long validationError;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *payload;

+ (id)description;

@end
