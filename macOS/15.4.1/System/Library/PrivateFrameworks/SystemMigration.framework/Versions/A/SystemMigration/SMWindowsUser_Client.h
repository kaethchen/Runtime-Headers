@class SMSystem_Client, NSArray, NSDictionary, NSString, NSData;

@interface SMWindowsUser_Client : SMUser_Client

@property (retain) SMSystem_Client *sourceSystem;
@property (retain) NSArray *components;
@property (readonly) NSDictionary *attributes;
@property (readonly) BOOL canTransfer;
@property (readonly) NSString *windowsSID;
@property (retain) NSData *accountPictureData;

+ (id)interestedDaemonKeys;
+ (id)interestedDaemonKeysLimitedToMigratableUsers;
+ (id)keyPathsForValuesAffectingDisplayExtraInfo;

- (void).cxx_destruct;
- (BOOL)allowOverwriteOfConflictedShortName;
- (id)displayExtraInfo;
- (id)initWithXpcDictionaryRepresentation:(id)a0 belongingToSystem:(id)a1;

@end
