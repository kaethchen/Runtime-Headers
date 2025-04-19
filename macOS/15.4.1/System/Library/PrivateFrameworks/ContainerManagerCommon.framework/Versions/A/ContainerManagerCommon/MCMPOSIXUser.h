@class NSURL, NSString;

@interface MCMPOSIXUser : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned int UID;
@property (readonly, nonatomic) unsigned int primaryGID;
@property (readonly, nonatomic) NSURL *homeDirectoryURL;
@property (readonly, nonatomic) NSURL *unvalidatedHomeDirectoryURL;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isRoot) BOOL root;
@property (readonly, nonatomic, getter=isRoleUser) BOOL roleUser;
@property (readonly, nonatomic, getter=hasUseableHomeDirectory) BOOL useableHomeDirectory;

+ (id)root;
+ (void)flush;
+ (id)_getCachedUID:(unsigned int)a0 flush:(BOOL)a1 onCacheMiss:(id /* block */)a2;
+ (BOOL)_isRoleUserWithUID:(unsigned int)a0 homeDirectoryURL:(id)a1;
+ (id)_posixUserWithPWD:(struct container_pwd_s { unsigned int x0; unsigned int x1; char *x2; char *x3; })a0;
+ (id)_posixUserWithUID:(unsigned int)a0 name:(id)a1 useUID:(BOOL)a2;
+ (id)currentPOSIXUser;
+ (id)nobody;
+ (id)posixUserWithName:(id)a0;
+ (id)posixUserWithUID:(unsigned int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)fullDescription;
- (id)initWithUID:(unsigned int)a0 primaryGID:(unsigned int)a1 homeDirectoryURL:(id)a2 unvalidatedHomeDirectoryURL:(id)a3 name:(id)a4 roleUser:(BOOL)a5;
- (BOOL)isEqualToPOSIXUser:(id)a0;

@end
