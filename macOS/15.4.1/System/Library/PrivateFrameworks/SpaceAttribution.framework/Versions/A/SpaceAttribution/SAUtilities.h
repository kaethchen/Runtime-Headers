@interface SAUtilities : NSObject

+ (id)breakCommaSeparatedStringToComponents:(id)a0;
+ (id)createCommaSeparatedString:(id)a0;
+ (void)getFileSize:(id)a0 reply:(id /* block */)a1;
+ (int)killSADaemon;
+ (int)loadSADaemon;
+ (void)processArrayConcurrently:(id)a0 number:(int)a1 queue:(id)a2 group:(id)a3 block:(id /* block */)a4;
+ (id)splitArray:(id)a0 into:(int)a1;

@end
