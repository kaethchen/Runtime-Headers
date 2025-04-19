@interface CNContactVerifier : NSObject

+ (id)os_log;
+ (BOOL)arePropertiesOfContactAuthorized:(id)a0 error:(id *)a1;
+ (BOOL)isValidContact:(id)a0 error:(id *)a1;

@end
