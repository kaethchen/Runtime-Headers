@interface VectorSearch.VSKAssetWrapper : NSObject {
    void /* unknown type, empty encoding */ wrappedAsset;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 vectors:(id)a1 attributes:(id)a2 payload:(id)a3;
- (id)initWithIdentifier:(id)a0 vectors:(id)a1 attributes:(id)a2 perVectorAttribute:(id)a3 payload:(id)a4;
- (id)initWithIdentifier:(id)a0 vectors:(id)a1 perVectorAttribute:(id)a2 payload:(id)a3;

@end
