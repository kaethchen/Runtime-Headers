@interface SUMacControllerError : NSObject

+ (id)buildErrorWithCode:(long long)a0 description:(id)a1;
+ (id)buildErrorWithCode:(long long)a0 underlying:(id)a1 description:(id)a2;
+ (id)localizedErrorStringForCode:(long long)a0;
+ (id)localizedErrorTitleForCode:(long long)a0;
+ (id)nameForErrorCode:(long long)a0;
+ (void)sanitizeError:(id *)a0;

@end
