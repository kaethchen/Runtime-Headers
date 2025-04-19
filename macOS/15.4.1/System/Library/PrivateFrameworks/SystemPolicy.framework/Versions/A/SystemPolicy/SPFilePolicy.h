@interface SPFilePolicy : NSObject

+ (id)getAllowedPaths;
+ (BOOL)dragIsAllowedToTarget:(id)a0 fromAliasOrSymlink:(id)a1 withError:(id *)a2;

@end
