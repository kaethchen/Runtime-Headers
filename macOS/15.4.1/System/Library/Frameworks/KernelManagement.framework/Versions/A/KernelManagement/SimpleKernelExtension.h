@class NSString, NSArray, NSDate;

@interface SimpleKernelExtension : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *fileSystemPath;
@property (nonatomic) BOOL loaded;
@property (nonatomic) BOOL kextIsSigned;
@property (retain, nonatomic) NSString *versionString;
@property (retain, nonatomic) NSDate *lastModifiedDate;
@property (retain, nonatomic) NSString *signingInfo;
@property (retain, nonatomic) NSString *infoString;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSArray *architectures;
@property (retain, nonatomic) NSString *loadAddress;
@property (retain, nonatomic) NSString *usageDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 fileSystemPath:(id)a1 loaded:(BOOL)a2 kextIsSigned:(BOOL)a3 versionString:(id)a4 lastModifiedDate:(id)a5 signingInfo:(id)a6 infoString:(id)a7 type:(unsigned long long)a8 displayName:(id)a9 architectures:(id)a10 loadAddress:(id)a11 usageDescription:(id)a12;

@end
