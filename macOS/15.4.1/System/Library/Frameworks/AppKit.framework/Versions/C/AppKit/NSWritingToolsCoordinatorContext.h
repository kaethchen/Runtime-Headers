@class WTContext, NSAttributedString, NSUUID;

@interface NSWritingToolsCoordinatorContext : NSObject

@property (retain, setter=_setWTContext:) WTContext *wtContext;
@property (readonly, copy) NSAttributedString *attributedString;
@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly) NSUUID *identifier;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } resolvedRange;

- (id)description;
- (void).cxx_destruct;
- (id)initWithAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
