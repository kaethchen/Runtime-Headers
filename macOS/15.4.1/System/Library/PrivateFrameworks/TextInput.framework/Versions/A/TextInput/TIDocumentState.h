@class NSString;

@interface TIDocumentState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *contextBeforeInput;
@property (readonly, nonatomic) NSString *markedText;
@property (readonly, nonatomic) NSString *selectedText;
@property (readonly, nonatomic) NSString *contextAfterInput;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedRangeInMarkedText;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } truncatedRangeInSelectedText;
@property (readonly, nonatomic) NSString *string;

+ (id)documentStateWithContextBefore:(id)a0 selectedText:(id)a1 contextAfter:(id)a2;
+ (id)_selectedTextByDeletingInteriorSentences:(id)a0 outTruncatedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
+ (id)_string:(id)a0 byTrimmingWordsAfterIndex:(unsigned long long)a1;
+ (id)_string:(id)a0 byTrimmingWordsBeforeIndex:(unsigned long long)a1;
+ (id)documentStateForTestingWithContextBefore:(id)a0 selectedText:(id)a1 contextAfter:(id)a2;
+ (id)documentStateForTestingWithContextBefore:(id)a0 selectedText:(id)a1 contextAfter:(id)a2 markedText:(id)a3 selectedRangeInMarkedText:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
+ (id)documentStateForTestingWithText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)documentStateWithContextBefore:(id)a0 markedText:(id)a1 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 contextAfter:(id)a3;
+ (id)unboundedDocumentStateForTestingWithContextBefore:(id)a0 selectedText:(id)a1 contextAfter:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)documentIsEmpty;
- (id)initWithContextBefore:(id)a0 markedText:(id)a1 selectedText:(id)a2 contextAfter:(id)a3 selectedRangeInMarkedText:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (id)documentStateAfterUnmarkingText;
- (id)documentStateAfterCollapsingSelection;
- (id)documentStateAfterDeletingBackward;
- (id)documentStateAfterDeletingForward;
- (id)documentStateAfterInsertingText:(id)a0;
- (id)documentStateAfterInsertingTextAfterSelection:(id)a0;
- (id)documentStateAfterReplacingText:(id)a0 withText:(id)a1;
- (id)documentStateAfterSettingMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)deletingBackwardsWillRemoveText;
- (id)documentStateAfterCursorAdjustment:(long long)a0;
- (unsigned long long)hashString:(id)a0 intoHashValue:(unsigned long long)a1;
- (id)initWithUnboundedContextBefore:(id)a0 markedText:(id)a1 selectedText:(id)a2 unboundedContextAfter:(id)a3 selectedRangeInMarkedText:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (id)initWithUnboundedContextBefore:(id)a0 markedText:(id)a1 selectedText:(id)a2 unboundedContextAfter:(id)a3 selectedRangeInMarkedText:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 truncatedRangeInSelectedText:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5;
- (unsigned long long)inputIndexWithTerminatorPredicate:(id /* block */)a0;
- (id)inputStemWithTerminatorPredicate:(id /* block */)a0;
- (id)inputStringWithTerminatorPredicate:(id /* block */)a0;
- (BOOL)isEqualIgnoringMarkedText:(id)a0;
- (id)wordPrefixOfString:(id)a0 withTerminatorPredicate:(id /* block */)a1 reverse:(BOOL)a2;

@end
