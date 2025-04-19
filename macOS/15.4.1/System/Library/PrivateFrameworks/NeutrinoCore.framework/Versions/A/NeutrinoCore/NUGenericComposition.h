@class NSDictionary, NSMutableDictionary;

@interface NUGenericComposition : NUComposition {
    NSMutableDictionary *_contents;
}

@property (copy, nonatomic) NSDictionary *contents;

- (void).cxx_destruct;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0;
- (id)initWithCompositionSchema:(id)a0;

@end
