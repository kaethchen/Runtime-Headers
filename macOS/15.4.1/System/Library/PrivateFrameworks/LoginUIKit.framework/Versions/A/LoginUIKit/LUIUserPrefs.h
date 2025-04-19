@class NSArray;

@interface LUIUserPrefs : NSObject

@property (class, readonly) BOOL fileVaultEnabled;
@property (class, readonly) BOOL findMyMacEnabled;
@property (class, readonly) NSArray *hiddenUsersList;
@property (class, readonly) BOOL hide500Users;
@property (class, readonly) BOOL hideAdminUsers;
@property (class, readonly) BOOL localUserLoginEnabled;
@property (class, readonly) unsigned long long preferredMaximumNumberOfAvatars;
@property (class, readonly) BOOL showMobileHomeUsers;
@property (class, readonly) BOOL showLocalUsers;
@property (class, readonly) NSArray *allowedList;
@property (class, readonly) NSArray *deniedList;
@property (class, readonly) long long maxNetworkUsers;
@property (class, readonly) BOOL showNetworkUsers;

+ (void)synchronize;
+ (BOOL)showOtherUser:(BOOL *)a0;
+ (BOOL)_boolValueForKey:(id)a0 valueExists:(BOOL *)a1;
+ (id)_defaults;
+ (id)_fvunlockPreferences;
+ (long long)_integerValueForKey:(id)a0 valueExists:(BOOL *)a1;
+ (id)_valueForKey:(id)a0 ofClass:(Class)a1 valueExists:(BOOL *)a2;

@end
