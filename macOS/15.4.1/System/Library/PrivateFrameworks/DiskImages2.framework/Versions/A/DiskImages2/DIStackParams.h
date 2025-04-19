@interface DIStackParams : DIBaseParams

- (id)initWithURL:(id)a0 error:(id *)a1;
- (BOOL)appendWithURL:(id)a0 isCache:(BOOL)a1 error:(id *)a2;
- (BOOL)appendWithURL:(id)a0 isCache:(BOOL)a1 numBlocks:(unsigned long long)a2 error:(id *)a3;
- (BOOL)supportsPstack;

@end
