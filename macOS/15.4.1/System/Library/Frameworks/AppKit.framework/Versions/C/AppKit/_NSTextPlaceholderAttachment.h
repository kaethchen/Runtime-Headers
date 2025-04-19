@class NSDictionary;

@interface _NSTextPlaceholderAttachment : NSTextAttachment

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } attachmentRange;
@property (copy, nonatomic) NSDictionary *typingAttributesBeforeInsertion;

@end
