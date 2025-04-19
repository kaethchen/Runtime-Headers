@class NSString, NSURL, NSObject;
@protocol OS_os_log;

@interface EMPersistenceLayoutManager : NSObject <EFLoggable>

@property (class, readonly, copy, nonatomic) NSString *baseMailDirectoryPath;
@property (class, readonly, copy, nonatomic) NSString *mailAccountDirectoryPath;
@property (class, readonly, copy, nonatomic) NSString *mailDataDirectoryPath;
@property (class, readonly, copy, nonatomic) NSString *tildeUnresolvedBaseMailDirectoryPath;
@property (class, readonly, copy, nonatomic) NSString *mailDirectoryNameSuffix;
@property (class, readonly, copy, nonatomic) NSString *unresolvedBaseMailDirectoryPath;
@property (class, readonly, copy, nonatomic) NSString *nonContainerizedBaseMailDirectoryPath;
@property (class, readonly, nonatomic) long long persistenceLayout;
@property (class, readonly, copy, nonatomic) NSString *mailDataDirectoryName;
@property (class, readonly, nonatomic) NSURL *persistenceInfoFile;
@property (class, readonly, nonatomic) NSURL *baseMailDirectory;
@property (class, readonly, nonatomic) NSURL *mailAccountDirectory;
@property (class, readonly, nonatomic) NSURL *mailDataDirectory;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_mailAccountDirectoryPathForPersistenceLayoutVersion:(long long)a0;
+ (id)_mailDataDirectoryPathForMailAccountDirectoryPath:(id)a0;
+ (id)_mailDataDirectoryPathForPersistenceLayoutVersion:(long long)a0;
+ (id)_nonContainerizedBaseMailDirectoryPathCreated:(BOOL *)a0;
+ (id)mailAccountDirectoryForPersistenceLayoutVersion:(long long)a0;
+ (id)mailDataDirectoryForPersistenceLayoutVersion:(long long)a0;
+ (long long)persistenceLayoutOfBaseMailDirectory:(id)a0;
+ (void)resetPersistenceLayout;
+ (id)topLevelDirectoryNameForPersistenceLayoutVersion:(long long)a0;


@end
