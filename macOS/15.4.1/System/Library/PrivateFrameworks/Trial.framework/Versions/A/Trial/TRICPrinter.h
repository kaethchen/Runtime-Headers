@interface TRICPrinter : NSObject

+ (void)printNewlineUsingStderr:(BOOL)a0 format:(id)a1;
+ (void)_printAndLogString:(id)a0 error:(BOOL)a1;
+ (id)_repeatString:(id)a0 length:(unsigned long long)a1;
+ (void)printAndLogDefaultWithFormat:(id)a0;
+ (void)printAndLogErrorWithFormat:(id)a0;
+ (void)printNewlineAndLogDefaultWithFormat:(id)a0;
+ (void)printNewlineAndLogErrorWithFormat:(id)a0;
+ (void)printTabularWithLogDefaultForLines:(id)a0;

@end
