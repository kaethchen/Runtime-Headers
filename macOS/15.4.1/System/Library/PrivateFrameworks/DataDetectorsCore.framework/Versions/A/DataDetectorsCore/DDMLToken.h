@class DDMLTokenType, NSString;

@interface DDMLToken : NSObject

@property (retain) DDMLTokenType *tokenType;
@property (copy) NSString *string;
@property float confidence;
@property struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (void).cxx_destruct;

@end
