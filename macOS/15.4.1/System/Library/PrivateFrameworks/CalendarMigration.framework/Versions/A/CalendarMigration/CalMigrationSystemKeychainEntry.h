@class NSString, NSDictionary, NSURLCredential, NSURLProtectionSpace;

@interface CalMigrationSystemKeychainEntry : NSObject <CalMigrationKeychainEntry>

@property (readonly, nonatomic) int source;
@property (readonly, nonatomic) NSDictionary *accountInformation;
@property (readonly, nonatomic) NSURLCredential *urlCredential;
@property (readonly, nonatomic) NSURLProtectionSpace *protectionSpace;
@property (readonly, nonatomic) NSString *password;
@property (readonly, nonatomic) NSString *username;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_initWithUsername:(id)a0 password:(id)a1 source:(int)a2 accountInformation:(id)a3 urlCredential:(id)a4 protectionSpace:(id)a5;
- (id)initSecItemEntryWithUsername:(id)a0 password:(id)a1 accountInformation:(id)a2;
- (id)initURLCredentialEntryWithCredential:(id)a0 protectionSpace:(id)a1;

@end
