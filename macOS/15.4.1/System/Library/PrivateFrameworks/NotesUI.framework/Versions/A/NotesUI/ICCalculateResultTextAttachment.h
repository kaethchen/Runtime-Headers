@class NSString;

@interface ICCalculateResultTextAttachment : ICInlineTextAttachment

@property (readonly, copy, nonatomic) NSString *expression;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } expressionRangeInTextStorage;
@property (readonly, copy, nonatomic) NSString *localizedError;

- (id)calculateDocumentController;

@end
