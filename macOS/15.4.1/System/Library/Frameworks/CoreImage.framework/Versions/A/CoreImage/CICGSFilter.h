@interface CICGSFilter : NSObject {
    unsigned int _cid;
    unsigned int _filter_id;
}

+ (id)filterWithFilter:(id)a0 connectionID:(unsigned int)a1;

- (void)dealloc;
- (id)description;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)setValuesForKeysWithDictionary:(id)a0;
- (int)addToWindow:(unsigned int)a0 flags:(unsigned int)a1;
- (id)initWithFilter:(id)a0 connectionID:(unsigned int)a1;
- (int)removeFromWindow:(unsigned int)a0;

@end
