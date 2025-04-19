@class NSMutableDictionary;

@interface CUEnvironment : NSObject {
    NSMutableDictionary *_objects;
}

- (id)description;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;

@end
