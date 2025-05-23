@class NSData, NSDictionary, REMFetchResultToken;

@interface REMStoreSwiftInvocationResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *resultData;
@property (readonly, nonatomic) NSDictionary *resultStorages;
@property (readonly, nonatomic) REMFetchResultToken *latestFetchResultToken;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResultData:(id)a0 storages:(id)a1 latestFetchResultToken:(id)a2;

@end
