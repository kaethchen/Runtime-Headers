@class SHClusterMetadata, NSString, NSURL, NSDate;

@interface SHClusterStatus : NSObject

@property (retain) NSURL *dataURL;
@property long long loadStatus;
@property BOOL isDataValid;
@property (retain) SHClusterMetadata *metadata;
@property (readonly, copy) NSString *uniqueHash;
@property (readonly, copy) NSString *storefront;
@property (readonly) NSDate *creationDate;
@property (readonly) long long clusterType;

- (void).cxx_destruct;

@end
