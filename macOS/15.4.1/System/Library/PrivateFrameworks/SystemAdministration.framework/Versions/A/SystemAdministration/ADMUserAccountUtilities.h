@interface ADMUserAccountUtilities : NSObject

+ (int)changeKeychainPassword:(id)a0 oldPassword:(id)a1;
+ (id)changePasswordForUser:(id)a0 oldPassword:(id)a1 newPassword:(id)a2;
+ (id)changePasswordForUser:(id)a0 oldPassword:(id)a1 newPassword:(id)a2 cdpCompletionHandler:(id /* block */)a3;
+ (id)humanSizeForSize:(unsigned long long)a0;
+ (void)killProcessesForUserID:(unsigned int)a0;
+ (id)listOfProcessOwners;
+ (long long)numberForKey:(struct __CFString { } *)a0 fromCFDict:(struct __CFDictionary { } *)a1;
+ (id)passwordErrorStringForODError:(long long)a0;

@end
