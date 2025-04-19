@class NSArray, CKStoreResponse, CKStoreClient, NSError, NSDictionary;

@interface CKPurchaseResponse : NSObject <NSCopying, NSSecureCoding> {
    NSArray *_downloads;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) CKStoreClient *storeClient;
@property (retain) CKStoreResponse *storeResponse;
@property (readonly) NSError *error;
@property (readonly) NSArray *downloads;
@property (readonly) NSDictionary *metrics;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithStoreClient:(id)a0 response:(id)a1;
- (id)_storeResponse;

@end
