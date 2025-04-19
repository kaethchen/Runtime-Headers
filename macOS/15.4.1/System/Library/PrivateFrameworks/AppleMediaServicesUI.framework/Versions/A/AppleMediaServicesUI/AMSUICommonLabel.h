@class NSString, NSAttributedString;

@interface AMSUICommonLabel : NSTextField

@property (retain) NSAttributedString *attributedText;
@property (retain) NSString *text;
@property long long textAlignment;
@property long long alignment;

@end
