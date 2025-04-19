@class NSObject;
@protocol NSCopying;

@interface ML3StatementCacheNode : NSObject

@property (copy, nonatomic) NSObject<NSCopying> *dictionaryKey;
@property (retain, nonatomic) ML3StatementCacheNode *next;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionaryKey:(id)a0;

@end
