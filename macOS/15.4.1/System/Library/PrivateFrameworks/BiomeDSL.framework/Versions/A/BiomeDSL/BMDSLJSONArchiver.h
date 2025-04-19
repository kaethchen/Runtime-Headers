@interface BMDSLJSONArchiver : NSCoder

+ (id)archivedDataWithDSL:(id)a0;
+ (id)archiveCompatibleObjectWithObject:(id)a0 options:(unsigned long long)a1 userInfo:(id)a2;
+ (id)archivedDataWithObject:(id)a0;
+ (id)archivedStringWithDSL:(id)a0;
+ (id)archivedStringWithObject:(id)a0;
+ (void)registerJSONTransformers;

@end
