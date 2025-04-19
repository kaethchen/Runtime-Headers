@interface NSURLKeyValuePair : NSObject {
    id key;
    id value;
    unsigned long long hash;
}

+ (id)pair;
+ (id)pairWithKey:(id)a0 value:(id)a1;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)value;
- (id)key;
- (void)setKey:(id)a0;
- (id)initWithKey:(id)a0 value:(id)a1;
- (void)setValue:(id)a0;

@end
