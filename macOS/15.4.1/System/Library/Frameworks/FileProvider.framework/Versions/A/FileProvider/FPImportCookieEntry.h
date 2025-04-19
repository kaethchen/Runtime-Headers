@class NSString;

@interface FPImportCookieEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *domainPathRelativeToVolumeRoot;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) unsigned long long fileID;
@property (nonatomic) double creationTime;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDomainPathRelativeToVolumeRoot:(id)a0 displayName:(id)a1 creationTime:(double)a2 andFileID:(unsigned long long)a3;
- (id)initWithDomainURL:(id)a0 displayName:(id)a1 error:(id *)a2;

@end
