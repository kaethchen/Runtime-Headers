@class NSString, NSURL, NSDate, ABCDContainerPermissions, ABCDProviderMetadata;

@interface ABCDContainer : NSObject

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *name;
@property (readonly) long long type;
@property (readonly, copy) NSURL *persistentStoreURL;
@property (readonly, copy) NSString *persistentStoreIdentifier;
@property (readonly, getter=isGuardianRestricted) BOOL guardianRestricted;
@property (readonly, copy) NSDate *lastSyncDate;
@property (readonly) int iOSLegacyIdentifier;
@property (retain, nonatomic) NSString *externalIdentifier;
@property (readonly, copy) ABCDContainerPermissions *permissions;
@property (retain, nonatomic) NSString *providerIdentifier;
@property (retain, nonatomic) ABCDProviderMetadata *providerMetadata;

+ (id)makeDefaultContainerPermissions;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 name:(id)a1 type:(long long)a2 persistentStoreURL:(id)a3 persistentStoreIdentifier:(id)a4 iOSLegacyIdentifier:(int)a5;
- (id)initWithIdentifier:(id)a0 name:(id)a1 type:(long long)a2 persistentStoreURL:(id)a3 persistentStoreIdentifier:(id)a4 permissions:(id)a5 guardianRestricted:(BOOL)a6 lastSyncDate:(id)a7 iOSLegacyIdentifier:(int)a8 externalIdentifier:(id)a9 providerIdentifier:(id)a10 providerMetadata:(id)a11;

@end
