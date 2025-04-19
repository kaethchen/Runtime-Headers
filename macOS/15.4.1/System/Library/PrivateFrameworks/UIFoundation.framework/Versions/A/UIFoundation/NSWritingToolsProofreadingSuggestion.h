@class NSUUID, NSAttributedString;

@interface NSWritingToolsProofreadingSuggestion : NSObject

@property (readonly) NSUUID *uuid;
@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } originalRange;
@property (readonly, copy) NSAttributedString *replacementString;
@property (readonly) long long lengthDelta;
@property long long state;

- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 originalRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2 state:(long long)a3;

@end
