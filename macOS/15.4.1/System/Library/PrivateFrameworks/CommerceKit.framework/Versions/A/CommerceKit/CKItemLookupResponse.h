@class NSDictionary;

@interface CKItemLookupResponse : NSObject {
    NSDictionary *_responseDictionary;
}

@property (readonly, nonatomic) unsigned long long responseCount;
@property (readonly, nonatomic) NSDictionary *resultDictionary;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)responseCount;
- (id)resultDictionary;

@end
