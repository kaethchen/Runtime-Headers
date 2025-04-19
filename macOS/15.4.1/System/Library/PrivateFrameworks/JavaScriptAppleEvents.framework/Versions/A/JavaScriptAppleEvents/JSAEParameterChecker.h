@interface JSAEParameterChecker : NSObject

+ (unsigned int)codeForArgument:(id)a0 parameter:(id)a1 scriptableEntity:(id)a2 error:(id *)a3;
+ (unsigned int)codeForArgument:(id)a0 types:(id)a1 scriptableEntity:(id)a2 error:(id *)a3;
+ (id)namesForParameterTypes:(id)a0 forApplication:(id)a1;
+ (id)typeOfJSValue:(id)a0;

@end
