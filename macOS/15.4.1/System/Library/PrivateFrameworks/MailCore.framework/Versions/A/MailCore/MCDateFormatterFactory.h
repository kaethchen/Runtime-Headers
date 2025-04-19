@interface MCDateFormatterFactory : NSObject

+ (id)newInternetMessageDateFormatter;
+ (id)newCommonInternetMessageDateFormatters;
+ (id)newIMAPDateFormatter;
+ (id)newUncommonInternetMessageDateFormatters;

@end
