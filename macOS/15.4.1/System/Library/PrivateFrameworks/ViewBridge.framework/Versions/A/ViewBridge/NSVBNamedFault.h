@interface NSVBNamedFault : NSObject

+ (BOOL)fault:(id)a0 withProbability:(double)a1 wasTaken:(BOOL)a2;
+ (void)_invokeIfShouldFault:(id)a0 format:(id)a1 arguments:(char *)a2 block:(id /* block */)a3;
+ (void)crashIfShouldFault:(id)a0;
+ (void)crashIfShouldFault:(id)a0 format:(id)a1;
+ (void)crashIfShouldFault:(id)a0 format:(id)a1 arguments:(char *)a2;
+ (void)exitIfShouldFault:(id)a0;
+ (void)exitIfShouldFault:(id)a0 format:(id)a1;
+ (void)exitIfShouldFault:(id)a0 format:(id)a1 arguments:(char *)a2;
+ (BOOL)idle:(double)a0 ifShouldFault:(id)a1;
+ (BOOL)idleUpTo:(double)a0 ifShouldFault:(id)a1;
+ (void)logTestedFaults:(id)a0;
+ (void)raiseIfShouldFault:(id)a0;
+ (void)raiseIfShouldFault:(id)a0 format:(id)a1;
+ (void)raiseIfShouldFault:(id)a0 format:(id)a1 arguments:(char *)a2;
+ (double)randomProportion;
+ (BOOL)shouldFault:(id)a0;
+ (BOOL)sleep:(double)a0 ifShouldFault:(id)a1;
+ (BOOL)sleepUpTo:(double)a0 ifShouldFault:(id)a1;

@end
