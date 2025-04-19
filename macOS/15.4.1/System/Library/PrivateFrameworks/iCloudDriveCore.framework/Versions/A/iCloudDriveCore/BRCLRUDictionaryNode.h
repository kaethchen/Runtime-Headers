@interface BRCLRUDictionaryNode : NSObject <NSCopying>

@property (readonly, nonatomic) id key;
@property (retain, nonatomic) id object;
@property (weak, nonatomic) BRCLRUDictionaryNode *next;
@property (weak, nonatomic) BRCLRUDictionaryNode *prev;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0 object:(id)a1;

@end
