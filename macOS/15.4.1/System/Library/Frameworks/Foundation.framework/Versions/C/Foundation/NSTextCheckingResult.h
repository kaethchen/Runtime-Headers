@interface NSTextCheckingResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long resultType;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;

+ (void)initialize;
+ (id)addressCheckingResultWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 components:(id)a1;
+ (id)correctionCheckingResultWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1;
+ (id)correctionCheckingResultWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1 alternativeStrings:(id)a2;
+ (id)dashCheckingResultWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1;
+ (id)dateCheckingResultWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 date:(id)a1;
+ (id)dateCheckingResultWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 date:(id)a1 timeZone:(id)a2 duration:(double)a3;
+ (id)grammarCheckingResultWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 details:(id)a1;
+ (id)linkCheckingResultWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 URL:(id)a1;
+ (id)orthographyCheckingResultWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 orthography:(id)a1;
+ (id)phoneNumberCheckingResultWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 phoneNumber:(id)a1;
+ (id)quoteCheckingResultWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1;
+ (id)regularExpressionCheckingResultWithRanges:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 count:(unsigned long long)a1 regularExpression:(id)a2;
+ (id)replacementCheckingResultWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1;
+ (id)spellCheckingResultWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)transitInformationCheckingResultWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 components:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)URL;
- (id)date;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeAtIndex:(unsigned long long)a0;
- (id)timeZone;
- (id)referenceDate;
- (unsigned long long)numberOfRanges;
- (id)replacementString;
- (BOOL)_adjustRangesWithOffset:(long long)a0;
- (id)addressComponents;
- (id)alternativeStrings;
- (id)components;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })decodeRangeWithCoder:(id)a0;
- (double)duration;
- (void)encodeRangeWithCoder:(id)a0;
- (id)grammarDetails;
- (id)leadingText;
- (id)orthography;
- (id)phoneNumber;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeWithName:(id)a0;
- (id)regularExpression;
- (id)resultByAdjustingRangesWithOffset:(long long)a0;
- (BOOL)timeIsApproximate;
- (BOOL)timeIsPast;
- (BOOL)timeIsSignificant;
- (id)trailingText;
- (void *)underlyingResult;

@end
