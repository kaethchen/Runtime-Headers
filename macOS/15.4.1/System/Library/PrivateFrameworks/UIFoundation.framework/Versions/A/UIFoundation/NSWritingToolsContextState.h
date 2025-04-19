@class NSAttributedString;

@interface NSWritingToolsContextState : NSObject

@property (copy, nonatomic) NSAttributedString *contextString;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } contextRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } proposedRange;

+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })contextRangeForString:(id)a0 proposedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContextString:(id)a0 contextLocation:(unsigned long long)a1 proposedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)initWithDocumentString:(id)a0 proposedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
