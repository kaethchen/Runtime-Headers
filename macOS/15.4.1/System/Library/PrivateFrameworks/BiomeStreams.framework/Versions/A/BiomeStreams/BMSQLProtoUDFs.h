@interface BMSQLProtoUDFs : NSObject

+ (void)_addEventClass:(Class)a0 toProtoRegistry:(id)a1;
+ (void)registerProtoUDFsWithDatabase:(id)a0 eventClasses:(id)a1 error:(id *)a2;

@end
