@class NSString, NSAttributedString;

@interface TIAttributedDocumentState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSAttributedString *contextBeforeInput;
@property (readonly, nonatomic) NSAttributedString *markedText;
@property (readonly, nonatomic) NSAttributedString *selectedText;
@property (readonly, nonatomic) NSAttributedString *contextAfterInput;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedRangeInMarkedText;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } truncatedRangeInSelectedText;
@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSAttributedString *attributedString;

+ (id)_attributedString:(id)a0 byTrimmingWordsAfterIndex:(unsigned long long)a1;
+ (id)_attributedString:(id)a0 byTrimmingWordsBeforeIndex:(unsigned long long)a1;
+ (id)_selectedTextByDeletingInteriorSentences:(id)a0 outTruncatedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
+ (id)attributedDocumentStateForTestingWithContextBefore:(id)a0 selectedText:(id)a1 contextAfter:(id)a2;
+ (id)attributedDocumentStateForTestingWithContextBefore:(id)a0 selectedText:(id)a1 contextAfter:(id)a2 markedText:(id)a3 selectedRangeInMarkedText:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
+ (id)attributedDocumentStateForTestingWithPlainContextBefore:(id)a0 selectedText:(id)a1 contextAfter:(id)a2;
+ (id)attributedDocumentStateForTestingWithPlainContextBefore:(id)a0 selectedText:(id)a1 contextAfter:(id)a2 markedText:(id)a3 selectedRangeInMarkedText:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
+ (id)attributedDocumentStateForTestingWithPlainText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)attributedDocumentStateForTestingWithText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)attributedDocumentStateWithContextBefore:(id)a0 markedText:(id)a1 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 contextAfter:(id)a3;
+ (id)attributedDocumentStateWithContextBefore:(id)a0 selectedText:(id)a1 contextAfter:(id)a2;
+ (id)attributedDocumentStateWithDocumentState:(id)a0;
+ (id)unboundedAttributedDocumentStateForTestingWithContextBefore:(id)a0 selectedText:(id)a1 contextAfter:(id)a2;
+ (id)unboundedAttributedDocumentStateForTestingWithPlainContextBefore:(id)a0 selectedText:(id)a1 contextAfter:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)documentIsEmpty;
- (id)documentState;
- (id)initWithContextBefore:(id)a0 markedText:(id)a1 selectedText:(id)a2 contextAfter:(id)a3 selectedRangeInMarkedText:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (id)documentStateAfterUnmarkingText;
- (id)documentStateAfterCollapsingSelection;
- (id)documentStateAfterDeletingBackward;
- (id)documentStateAfterDeletingForward;
- (id)documentStateAfterInsertingText:(id)a0;
- (id)documentStateAfterInsertingTextAfterSelection:(id)a0;
- (id)documentStateAfterReplacingText:(id)a0 withText:(id)a1;
- (id)documentStateAfterSettingMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)documentStateWithAttributeIterator:(id /* block */)a0;
- (id)initWithText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)documentStateAfterCursorAdjustment:(long long)a0;
- (unsigned long long)hashString:(id)a0 intoHashValue:(unsigned long long)a1;
- (id)initWithUnboundedContextBefore:(id)a0 markedText:(id)a1 selectedText:(id)a2 unboundedContextAfter:(id)a3 selectedRangeInMarkedText:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (id)initWithUnboundedContextBefore:(id)a0 markedText:(id)a1 selectedText:(id)a2 unboundedContextAfter:(id)a3 selectedRangeInMarkedText:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 truncatedRangeInSelectedText:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5;
- (BOOL)isEqualIgnoringMarkedText:(id)a0;
- (BOOL)isTextEqualIgnoringMarkedText:(id)a0;

@end
