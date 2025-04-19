@interface SMWindowsUtilities : NSObject

+ (BOOL)markUser:(id)a0 withWindowsSID:(id)a1;
+ (id)migratedWindowsUsers;
+ (id)protectedAppDataContainerPathForCurrentUser;
+ (id)protectedAppDataContainerPathForUser:(unsigned int)a0;
+ (BOOL)setAttributesOnDirectory:(id)a0 deepEnumeration:(BOOL)a1 attributes:(id)a2 error:(id *)a3;

@end
