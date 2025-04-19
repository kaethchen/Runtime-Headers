@class MCMLibraryRepairForUser, NSString, NSURL, MCMPOSIXUser, MCMContainerPath;

@interface MCMContainerSchemaContext : NSObject

@property (readonly, nonatomic) unsigned long long containerClass;
@property (readonly, nonatomic) NSURL *homeDirectoryURL;
@property (readonly, nonatomic) MCMContainerPath *containerPath;
@property (readonly, nonatomic) MCMContainerPath *finalContainerPath;
@property (readonly, nonatomic) unsigned short posixMode;
@property (readonly, nonatomic) MCMPOSIXUser *posixOwner;
@property (readonly, nonatomic) int dataProtectionClass;
@property (readonly, nonatomic) MCMLibraryRepairForUser *libraryRepair;
@property (readonly, nonatomic) NSString *identifier;

+ (id)contextWithHomeDirectoryURL:(id)a0 containerPath:(id)a1 finalContainerPath:(id)a2 POSIXMode:(unsigned short)a3 POSIXOwner:(id)a4 containerClass:(unsigned long long)a5 dataProtectionClass:(int)a6 libraryRepair:(id)a7 identifier:(id)a8;

- (void).cxx_destruct;
- (id)initWithHomeDirectoryURL:(id)a0 containerPath:(id)a1 finalContainerPath:(id)a2 POSIXMode:(unsigned short)a3 POSIXOwner:(id)a4 containerClass:(unsigned long long)a5 dataProtectionClass:(int)a6 libraryRepair:(id)a7 identifier:(id)a8;

@end
