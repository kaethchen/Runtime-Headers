@interface PFMulticasterDistributionMethods

+ (void /* unknown type, empty encoding */)initialize;

- (void)distribute:(id)a0 objectArg:(id)a1 objectArg:(id)a2;
- (void)distributeNoArg;
- (void)distributeBOOL:(BOOL)a0;
- (void)distribute:(id)a0;
- (void)distribute:(id)a0 boolArg:(BOOL)a1;
- (void)distribute:(id)a0 doubleArg:(double)a1;
- (void)distribute:(id)a0 double_Arg:(double)a1 double_Arg:(double)a2;
- (void)distribute:(id)a0 double_Arg:(double)a1 object_Arg:(id)a2;
- (void)distribute:(id)a0 int32t_Arg:(int)a1 double_Arg:(double)a2;
- (void)distribute:(id)a0 int32t_Arg:(int)a1 int32t_Arg:(int)a2;
- (void)distribute:(id)a0 int32t_Arg:(int)a1 object_Arg:(id)a2;
- (void)distribute:(id)a0 int64t_Arg:(long long)a1 int64t_Arg:(long long)a2;
- (void)distribute:(id)a0 objectArg:(id)a1;
- (void)distribute:(id)a0 objectArg:(id)a1 BOOLArg:(BOOL)a2;
- (void)distribute:(id)a0 objectArg:(id)a1 BOOLArg:(BOOL)a2 BOOLArg:(BOOL)a3;
- (void)distribute:(id)a0 objectArg:(id)a1 objectArg:(id)a2 objectArg:(id)a3;
- (void)distribute:(id)a0 objectArg:(id)a1 uint64_tArg:(unsigned long long)a2;
- (void)distribute:(id)a0 objectArg:(id)a1 uint64_tArg:(unsigned long long)a2 cgRect_Arg:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)distribute:(id)a0 objectArg:(id)a1 uint64_tArg:(unsigned long long)a2 uint64_tArg:(unsigned long long)a3;
- (void)distribute:(id)a0 objectArg:(id)a1 uint64_tArg:(unsigned long long)a2 uint64_tArg:(unsigned long long)a3 uint64_tArg:(unsigned long long)a4;
- (void)distribute:(id)a0 uint64_tArg:(unsigned long long)a1;
- (void)distribute:(id)a0 uint64_tArg:(unsigned long long)a1 cgRect_Arg:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)distribute:(id)a0 uint64_tArg:(unsigned long long)a1 objectArg:(id)a2;
- (void)distribute:(id)a0 uint64_tArg:(unsigned long long)a1 objectArg:(id)a2 objectArg:(id)a3;
- (void)distribute:(id)a0 uint64_tArg:(unsigned long long)a1 uint64_tArg:(unsigned long long)a2;
- (void)distribute:(id)a0 uint64_tArg:(unsigned long long)a1 uint64_tArg:(unsigned long long)a2 uint64_tArg:(unsigned long long)a3;
- (void)distribute:(id)a0 unsignedIntArg:(unsigned int)a1 unsignedIntArg:(unsigned int)a2;
- (void)distributeDispatchBlock:(id /* block */)a0;
- (void)distributeDouble:(double)a0;
- (void)distributeFloat:(float)a0;
- (void)distributeNSInteger:(long long)a0;
- (void)distributeNSUInteger:(unsigned long long)a0;

@end
