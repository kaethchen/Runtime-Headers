@interface BMPersonaUtilities : NSObject

+ (id)allProfilesWithError:(id *)a0;
+ (id)currentPersonaIdentifier;
+ (id)currentPersonaIdentifierLoggingDescription;
+ (BOOL)currentPersonaIsDefault;
+ (BOOL)isUserPersonaIdentifier:(id)a0;
+ (void)runAsPersonaIdentifier:(id)a0 block:(id /* block */)a1;

@end
