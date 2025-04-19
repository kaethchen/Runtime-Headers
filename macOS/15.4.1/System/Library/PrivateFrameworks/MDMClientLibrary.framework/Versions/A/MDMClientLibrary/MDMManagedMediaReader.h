@interface MDMManagedMediaReader : NSObject

+ (id)_metadataByBundleIDExcludeDDMApps:(BOOL)a0;
+ (id)attributesByAppID;
+ (id)attributesByAppIDExcludeDDMApps:(BOOL)a0;
+ (id)managedAppIDs;
+ (id)managedAppIDsExcludeDDMApps:(BOOL)a0;
+ (id)managedAppIDsWithFlags:(unsigned long long)a0;
+ (id)managedAppIDsWithFlags:(unsigned long long)a0 excludeDDMApps:(BOOL)a1;
+ (id)managedBooks;

@end
