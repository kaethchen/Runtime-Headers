@interface SFLList : NSObject

+ (struct _LSBinding { } *)copyBindingFromItem:(id)a0;
+ (struct OpaqueIconRef { } *)copyIconRefFromItem:(id)a0;
+ (id)itemByInsertingAfterItem:(id)a0 name:(id)a1 URL:(id)a2 propertiesToSet:(id)a3 propertiesToClear:(id)a4 list:(id)a5;
+ (id)itemByInsertingAfterItem:(id)a0 name:(id)a1 aliasPtr:(void *)a2 aliasSize:(unsigned int)a3 propertiesToSet:(id)a4 propertiesToClear:(id)a5 list:(id)a6;
+ (id)itemByInsertingAfterItem:(id)a0 name:(id)a1 bookmark:(id)a2 propertiesToSet:(id)a3 propertiesToClear:(id)a4 list:(id)a5;
+ (id)itemByInsertingAfterItem:(id)a0 name:(id)a1 fsRef:(const struct FSRef { unsigned char x0[80]; } *)a2 propertiesToSet:(id)a3 propertiesToClear:(id)a4 list:(id)a5;
+ (id)propertyNamed:(id)a0 item:(id)a1;
+ (int)refreshResolvedPropertiesForItem:(id)a0;
+ (int)resolveItem:(id)a0 resolutionFlags:(unsigned int)a1 URL:(id *)a2 fsRef:(struct FSRef { unsigned char x0[80]; } *)a3;
+ (BOOL)resolveItem:(id)a0 resolutionFlags:(unsigned int)a1 error:(id *)a2;
+ (int)setProperty:(id)a0 forName:(id)a1 item:(id)a2;

@end
