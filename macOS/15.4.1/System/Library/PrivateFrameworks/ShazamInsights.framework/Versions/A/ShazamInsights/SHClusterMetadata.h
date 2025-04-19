@class NSString, NSDate;

@interface SHClusterMetadata : NSObject

@property (readonly, copy) NSString *uniqueHash;
@property (readonly, copy) NSString *storefront;
@property (readonly) NSDate *creationDate;
@property (readonly) long long clusterType;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0 storefront:(id)a1 uniqueHash:(id)a2 creationDate:(id)a3;

@end
