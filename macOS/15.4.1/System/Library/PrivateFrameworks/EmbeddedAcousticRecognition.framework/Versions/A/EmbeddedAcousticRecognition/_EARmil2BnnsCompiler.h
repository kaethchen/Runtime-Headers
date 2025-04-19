@interface _EARmil2BnnsCompiler : NSObject

+ (void)initialize;
+ (BOOL)validateBnnsIr:(id)a0;
+ (void)compileWithModelMilPath:(id)a0 bnnsIrOutPath:(id)a1 milConfigPath:(id)a2 errorOut:(id *)a3;

@end
