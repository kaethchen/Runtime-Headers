@interface _MLTMultiArrayUtils : NSObject

+ (double)PSNRBetweenMultiArray:(id)a0 multiArray:(id)a1 error:(id *)a2;
+ (double)SNRBetweenMultiArray:(id)a0 multiArray:(id)a1 error:(id *)a2;
+ (id)absoluteDifferenceBetweenMultiArray:(id)a0 multiArray:(id)a1 error:(id *)a2;
+ (id)arrayWithShape:(id)a0 values:(id)a1 type:(long long)a2 error:(id *)a3;
+ (BOOL)checkCountAndTypeBetweenMultiArray:(id)a0 multiarray:(id)a1 forMetric:(id)a2 error:(id *)a3;
+ (id)differenceBetweenMultiArray:(id)a0 multiArray:(id)a1 error:(id *)a2;
+ (BOOL)hasOverflow:(id)a0;
+ (double)maxAbsoluteErrorBetweenMultiArray:(id)a0 multiArray:(id)a1 error:(id *)a2;
+ (double)maxRelativeErrorBetweenMultiArray:(id)a0 multiArray:(id)a1 error:(id *)a2;
+ (double *)relativeErrorArrayBetweenMultiArray:(id)a0 multiArray:(id)a1 error:(id *)a2;
+ (id)relativeErrorMultiArrayBetweenMultiArray:(id)a0 multiArray:(id)a1 error:(id *)a2;
+ (double)relativeL2NormBetweenMultiArray:(id)a0 multiArray:(id)a1 error:(id *)a2;
+ (id)topK:(long long)a0 activationsForMultiArray:(id)a1 error:(id *)a2;
+ (id)updateArrayIfNeeded:(id)a0;

@end
