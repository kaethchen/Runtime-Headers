@class NSArray, NSDictionary, NSMutableDictionary, NSMutableArray;

@interface BCSPIRBatchRequest : NSObject {
    NSMutableDictionary *_storage;
    NSMutableArray *_invalidIdentifiers;
}

@property (readonly, nonatomic) NSArray *pirKeysToFetch;
@property (readonly, nonatomic) NSDictionary *identifiersByPIRKey;
@property (readonly, nonatomic) NSArray *invalidIdentifiers;

- (void).cxx_destruct;
- (id)initWithQuery:(id)a0;

@end
