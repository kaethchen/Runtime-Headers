@class NSNumber, NSString;

@interface ASDManagedApplicationRequestOptions : ASDRequestOptions

@property (copy, nonatomic) NSNumber *accountIdentifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *bundleVersion;
@property (readonly, nonatomic) NSNumber *externalVersionIdentifier;
@property (readonly, nonatomic) NSNumber *itemIdentifier;
@property (readonly, nonatomic) BOOL skipDownloads;
@property (nonatomic) long long requestType;

- (id)init;
- (void).cxx_destruct;

@end
