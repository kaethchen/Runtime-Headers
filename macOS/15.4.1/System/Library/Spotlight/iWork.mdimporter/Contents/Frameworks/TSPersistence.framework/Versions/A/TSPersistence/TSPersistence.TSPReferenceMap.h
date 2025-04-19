@interface TSPersistence.TSPReferenceMap : NSObject {
    void /* unknown type, empty encoding */ referenceMap;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)allReferencesFromIdentifier:(long long)a0;
- (void)enumerateReferencesUsingBlock:(id /* block */)a0;
- (id)makeMutableReferenceMap;

@end
