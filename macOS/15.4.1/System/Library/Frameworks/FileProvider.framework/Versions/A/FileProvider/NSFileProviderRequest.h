@class NSUUID, NSURL, NSFileProviderDomainVersion;

@interface NSFileProviderRequest : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) NSUUID *_finderIdentifier;
@property (class, readonly, nonatomic) NSUUID *_dsIdentifier;
@property (class, readonly, nonatomic) NSUUID *_dmIdentifier;
@property (class, readonly, nonatomic) NSUUID *_filesIdentifier;
@property (class, readonly, nonatomic) NSUUID *_fpdIdentifier;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isSpeculativeDownload) BOOL speculativeDownload;
@property (retain, nonatomic) NSUUID *requestingApplicationIdentifier;
@property (copy, nonatomic) NSURL *requestingExecutable;
@property (retain, nonatomic) NSFileProviderDomainVersion *domainVersion;
@property (readonly, nonatomic) BOOL isSystemRequest;
@property (readonly, nonatomic) BOOL isFileViewerRequest;

+ (id)requestFromTheSystem;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIsSpeculativeDownload:(BOOL)a0;

@end
