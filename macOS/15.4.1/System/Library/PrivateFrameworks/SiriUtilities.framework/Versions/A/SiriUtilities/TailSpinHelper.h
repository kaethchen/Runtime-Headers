@interface TailSpinHelper : NSObject

+ (id)getLogger;
+ (id)getTailSpinDir:(id)a0;
+ (void)setSuccessfulTailSpinDate:(id)a0 date:(id)a1;
+ (id)getLastSuccessfulTailSpinDate:(id)a0;
+ (BOOL)isValidToCreateTailSpin:(id)a0;
+ (BOOL)isValidToDeleteTailSpinDir:(id)a0;

- (void)clearDirectory:(id)a0 queue:(id)a1;
- (void)dumpTailSpinOutputToFile:(id)a0 suiteName:(id)a1 options:(id)a2 queue:(id)a3 handler:(id /* block */)a4;

@end
