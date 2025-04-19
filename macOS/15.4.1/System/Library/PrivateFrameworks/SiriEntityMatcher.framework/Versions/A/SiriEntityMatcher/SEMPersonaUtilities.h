@interface SEMPersonaUtilities : NSObject

+ (id)allProfilesWithError:(id *)a0;
+ (id)currentPersonaIdentifier;
+ (BOOL)currentPersonaIsDefault;
+ (BOOL)isUserPersonaIdentifier:(id)a0;
+ (void)runAsPersonaIdentifier:(id)a0 block:(id /* block */)a1;
+ (BOOL)enumerateAndAssumeAllUserPersonas:(id *)a0 usingBlock:(id /* block */)a1;

@end
