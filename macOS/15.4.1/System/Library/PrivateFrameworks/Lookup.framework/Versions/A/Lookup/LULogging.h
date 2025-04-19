@interface LULogging : NSObject

+ (void)logType:(unsigned long long)a0 method:(SEL)a1 arguments:(id)a2;
+ (void)logType:(unsigned long long)a0 method:(SEL)a1 arguments:(id)a2 returnKeys:(id)a3 returnValues:(id)a4;
+ (BOOL)shouldLog:(unsigned long long)a0;
+ (id)stringFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 andSubstringOfString:(id)a1;

@end
