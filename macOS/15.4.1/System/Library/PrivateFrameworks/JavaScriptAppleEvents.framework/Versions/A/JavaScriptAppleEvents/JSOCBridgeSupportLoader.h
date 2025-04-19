@class NSDictionary, NSMutableDictionary;

@interface JSOCBridgeSupportLoader : NSObject {
    NSMutableDictionary *_dictionary;
}

@property (readonly) NSDictionary *cache;

- (void).cxx_destruct;
- (void)loadMetadata:(id)a0;
- (id)initWithFrameworkPath:(id)a0;
- (id)initWithLoadPath:(id)a0 exportedDylibs:(id)a1 metadata:(id)a2;

@end
