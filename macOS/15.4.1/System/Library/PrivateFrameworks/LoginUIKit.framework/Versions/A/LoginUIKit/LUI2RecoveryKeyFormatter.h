@interface LUI2RecoveryKeyFormatter : NSFormatter

- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (BOOL)isPartialStringValid:(id *)a0 proposedSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 originalString:(id)a2 originalSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 errorDescription:(id *)a4;
- (id)stringForObjectValue:(id)a0;
- (id)_allowedCharacters;
- (BOOL)isValidRecoveryKey:(id)a0;
- (id)recoveryKeyWithHyphens:(id)a0 includingEndOfString:(BOOL)a1;
- (id)recoveryKeyWithoutHyphens:(id)a0;

@end
