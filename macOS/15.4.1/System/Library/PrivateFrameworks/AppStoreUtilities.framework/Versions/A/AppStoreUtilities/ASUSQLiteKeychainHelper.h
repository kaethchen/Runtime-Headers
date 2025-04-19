@interface ASUSQLiteKeychainHelper : NSObject

+ (id)fetchKeyWithIdentifier:(id)a0 error:(id *)a1;
+ (BOOL)storeKey:(id)a0 withIdentifier:(id)a1 error:(id *)a2;

@end
