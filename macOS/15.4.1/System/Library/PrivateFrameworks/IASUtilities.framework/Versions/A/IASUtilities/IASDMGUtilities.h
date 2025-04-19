@interface IASDMGUtilities : NSObject

+ (id)_allDevNodesUnder:(unsigned int)a0;
+ (id)_mountPointForDevNode:(id)a0;
+ (id)_mountPointsForPath:(id)a0 inKernel:(BOOL)a1;
+ (id)mountPointsOfDMGAtPath:(id)a0 isInKernel:(BOOL *)a1;

@end
