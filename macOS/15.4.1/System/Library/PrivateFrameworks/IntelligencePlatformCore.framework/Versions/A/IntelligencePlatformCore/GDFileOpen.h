@interface GDFileOpen : NSObject

+ (int)openWithPath:(id)a0 flags:(int)a1 protection:(int)a2 mode:(int)a3 errorCode:(int *)a4;
+ (BOOL)setFileLimitWithError:(id *)a0;

@end
