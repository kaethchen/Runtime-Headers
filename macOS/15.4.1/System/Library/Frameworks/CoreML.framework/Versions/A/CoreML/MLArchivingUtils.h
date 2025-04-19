@interface MLArchivingUtils : NSObject

+ (BOOL)parseModelArchive:(void *)a0 modelType:(int *)a1 compilerVersion:(id *)a2 modelVersion:(id *)a3 error:(id *)a4;
+ (id)codedObjectURLFromInputArchiver:(void *)a0;
+ (id)codedObjectURLFromOutputArchiver:(void *)a0;

@end
