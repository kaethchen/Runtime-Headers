@interface SFAuthorizationRights : NSObject

+ (unsigned int)_copyAuthorizationRights:(const struct { unsigned int x0; struct *x1; } *)a0 toRights:(struct **)a1;
+ (void)_freeAuthorizationRights:(struct { unsigned int x0; struct *x1; } *)a0;

@end
