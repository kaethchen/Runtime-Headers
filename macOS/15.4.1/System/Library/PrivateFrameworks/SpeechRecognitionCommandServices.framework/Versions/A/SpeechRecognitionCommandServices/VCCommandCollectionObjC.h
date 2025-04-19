@class NSArray;

@interface VCCommandCollectionObjC : NSObject {
    void /* unknown type, empty encoding */ representedCollection;
}

@property (nonatomic, readonly) NSArray *commandIdentifiers;
@property (nonatomic, readonly) NSArray *commandIdentifiersForCurrentDevice;

+ (id)allCollectionIdentifiers;
+ (id)allCollections;
+ (id)collectionWithIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
