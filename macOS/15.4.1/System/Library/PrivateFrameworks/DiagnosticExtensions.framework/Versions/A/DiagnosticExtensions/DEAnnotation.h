@interface DEAnnotation : NSObject

+ (id)errorWithMessage:(id)a0;
+ (void)annotateURL:(id)a0 displayName:(id)a1 description:(id)a2 iconType:(id)a3 additionalInfo:(id)a4 error:(id *)a5;
+ (id)readExtendedAttributeInURL:(id)a0 forKey:(id)a1 error:(id *)a2;
+ (id)writeExtendedAttributeInURL:(id)a0 forKey:(id)a1 value:(id)a2;

@end
