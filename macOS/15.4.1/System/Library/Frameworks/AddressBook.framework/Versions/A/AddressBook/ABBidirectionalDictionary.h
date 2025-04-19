@class NSMutableDictionary;

@interface ABBidirectionalDictionary : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary *_keyToObjectDictionary;
    NSMutableDictionary *_objectToKeyDictionary;
}

+ (id)bidirectionalDictionary;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)keyForObject:(id)a0;

@end
