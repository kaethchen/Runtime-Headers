@interface STYSentryDiagnosticsHelper : NSObject

+ (BOOL)_close:(int)a0 error:(id *)a1;
+ (int)_openOutputFile:(id)a0 error:(id *)a1;
+ (BOOL)compressFileAtURL:(id)a0 outputURL:(id)a1 error:(id *)a2;
+ (BOOL)saveTailspin:(id)a0 reason:(id)a1 includeSignposts:(BOOL)a2 includeLogs:(BOOL)a3 startTime:(unsigned long long)a4 endTime:(unsigned long long)a5 symbolicate:(BOOL)a6 error:(id *)a7;
+ (id)sentryAttributesForURL:(id)a0;
+ (BOOL)setSentryAttributesToURL:(id)a0 attributes:(id)a1 error:(id *)a2;
+ (BOOL)tailspinEnabled:(BOOL)a0;

@end
