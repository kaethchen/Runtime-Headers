@class NSString, NSSet, NSObject;
@protocol OS_xpc_object;

@interface SDConnectionConfiguration : NSObject <CSXPCConnectionConfiguration>

@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (readonly, nonatomic) NSString *protectionClass;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *personaID;
@property (readonly, nonatomic) NSSet *allowedBundleIDs;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) unsigned int euid;
@property (readonly, nonatomic) unsigned int egid;
@property (readonly, nonatomic) BOOL internal;
@property (readonly, nonatomic) BOOL searchInternal;
@property (readonly, nonatomic) BOOL isExtension;
@property (readonly, nonatomic) BOOL privateIndexNonSandboxAllowed;
@property (readonly, nonatomic) BOOL managedIndexNonSandboxAllowed;
@property (readonly, nonatomic) BOOL isPrivate;
@property (readonly, nonatomic) BOOL isManaged;
@property (readonly, nonatomic) BOOL allowMail;
@property (readonly, nonatomic) BOOL quotaDisabled;
@property (readonly, nonatomic) BOOL allowPhotosLibraryDeletion;
@property (readonly, nonatomic) BOOL allowOpenJournalFile;
@property (readonly, nonatomic) int entitledAttributes;
@property (readonly, nonatomic) BOOL allowNotifications;
@property (readonly, nonatomic) BOOL allowMessagesContent;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 isManaged:(BOOL)a1;
- (id)initWithConnection:(id)a0 isPrivate:(BOOL)a1;
- (id)initWithConnection:(id)a0 isPrivate:(BOOL)a1 isManaged:(BOOL)a2;

@end
