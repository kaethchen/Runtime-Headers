@class NSString, NSMutableArray, BRLTTextFormattingRanges;

@interface BRLTScriptString : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableArray *tokenRanges;
@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selection;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } focus;
@property (retain, nonatomic) BRLTTextFormattingRanges *textFormattingRanges;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } suggestionRange;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })deleteMergeAtom;
- (void)_addSelectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_backwardEditingAtomForCursorLocation:(unsigned long long)a0 isBreak:(BOOL *)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_backwardEditingAtomForSelection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 isBreak:(BOOL *)a1;
- (void)addString:(id)a0 selection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 focus:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 token:(unsigned long long)a3;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })backwardEditingAtom;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })forwardEditingAtom;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })forwardEditingAtomForCursorLocation:(unsigned long long)a0;
- (id)initWithString:(id)a0 selection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithString:(id)a0 selection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 focus:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 token:(unsigned long long)a3;
- (BOOL)isEqualToScriptString:(id)a0;

@end
