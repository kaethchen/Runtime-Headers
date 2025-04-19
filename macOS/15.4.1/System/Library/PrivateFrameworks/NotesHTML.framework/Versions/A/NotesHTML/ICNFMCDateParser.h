@interface ICNFMCDateParser : NSObject

+ (id)dateFromInternetMessageDateString:(id)a0;
+ (id)dateFromIMAPDateString:(id)a0;
+ (id)_commonDateFormatters;
+ (id)_dateFromString:(id)a0 imapFirst:(BOOL)a1;
+ (id)_dateStringByStrippingCommentsFromString:(id)a0;
+ (id)_fallbackDateFormaters;
+ (id)_imapDateFormatter;

@end
