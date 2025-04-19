@class NSDictionary;

@interface PPLabelMatcher : NSObject {
    NSDictionary *_map;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_generateMap;
- (unsigned long long)matchFromLabel:(id)a0 toLabel:(id)a1;

@end
