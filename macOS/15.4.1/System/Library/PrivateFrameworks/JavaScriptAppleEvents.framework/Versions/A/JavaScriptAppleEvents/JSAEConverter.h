@interface JSAEConverter : NSObject

+ (id)descFromArray:(id)a0 forTypes:(id)a1 forScriptableEntity:(id)a2;
+ (id)descFromValue:(id)a0 forScriptableEntity:(id)a1;
+ (id)descFromValue:(id)a0 forType:(unsigned int)a1 forScriptableEntity:(id)a2;
+ (id)paramDescFromValue:(id)a0 forParameter:(id)a1 forScriptableEntity:(id)a2 error:(id *)a3;
+ (id)stringFromDesc:(id)a0 forScriptableEntity:(id)a1 inContext:(id)a2;
+ (id)valueFromDesc:(id)a0 withClassCode:(unsigned int)a1 forScriptableEntity:(id)a2 container:(id)a3 inContext:(id)a4 exception:(id *)a5;

@end
