@class NSMutableDictionary;

@interface SafeMutableDictionary : NSMutableDictionary {
    NSMutableDictionary *dictionary;
}

- (id)init;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
