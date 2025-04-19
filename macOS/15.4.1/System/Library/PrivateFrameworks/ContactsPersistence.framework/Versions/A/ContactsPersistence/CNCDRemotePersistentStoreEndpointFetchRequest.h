@class NSArray;

@interface CNCDRemotePersistentStoreEndpointFetchRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSArray *storeDescriptors;

+ (id)fetchRequestForAllStoresIncludingDisabled:(BOOL)a0;
+ (id)fetchRequestForAvailableEnabledStores;
+ (id)fetchRequestForStoresMatchingDescriptors:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStoreDescriptors:(id)a0;

@end
