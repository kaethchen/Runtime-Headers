@class NSString, NSObject;
@protocol OS_os_log;

@interface EMMessageIDRandomizer : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)randomizedStringForGlobalMessageID:(long long)a0;
+ (id)_createRandomizedStringForMessageID:(long long)a0;
+ (void)_deleteExpiredStringForMessageID:(long long)a0;
+ (id)_findExistingStringError:(out id *)a0 messageID:(long long)a1;
+ (id)_findOrCreateRandomizedStringForMessageID:(long long)a0;
+ (id)_queryKeychainError:(out id *)a0 messageID:(long long)a1;

- (id)init;

@end
