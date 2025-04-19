@class NSDictionary, AMSPromise;

@interface SHRecorderConfiguration : NSObject

@property (readonly) NSDictionary *cacheValues;
@property (readonly) AMSPromise *promise;

- (void).cxx_destruct;
- (id)initWithValues:(id)a0;
- (id)initWithPromise:(id)a0;
- (unsigned long long)availableRecordersForClientIdentifier:(id)a0;
- (id)cacheValuesForIdentifier:(id)a0;

@end
