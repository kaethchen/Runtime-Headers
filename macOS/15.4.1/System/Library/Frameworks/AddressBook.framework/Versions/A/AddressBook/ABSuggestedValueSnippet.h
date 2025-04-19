@class NSString, NSURL, NSDate;

@interface ABSuggestedValueSnippet : NSObject

@property (copy) NSString *text;
@property struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (copy) NSURL *url;
@property (copy) NSString *senderName;
@property (copy) NSString *subject;
@property (copy) NSString *appName;
@property (copy) NSDate *dateReceived;

- (void).cxx_destruct;

@end
