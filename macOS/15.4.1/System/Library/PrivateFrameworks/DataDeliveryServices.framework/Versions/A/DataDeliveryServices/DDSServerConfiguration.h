@class NSString, NSURL;

@interface DDSServerConfiguration : NSObject <NSCopying>

@property (readonly, copy) NSString *xpcServiceName;
@property (readonly, copy) NSURL *assertionStorageDirectoryURL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithXPCServiceName:(id)a0 assertionStorageDirectoryURL:(id)a1;

@end
