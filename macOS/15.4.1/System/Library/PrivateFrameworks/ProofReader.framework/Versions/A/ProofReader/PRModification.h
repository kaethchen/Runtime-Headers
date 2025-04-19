@interface PRModification : NSObject

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })additionalSyllableRange;
- (double)modificationScore;
- (unsigned long long)modificationType;
- (id)replacementString;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })syllableRange;

@end
