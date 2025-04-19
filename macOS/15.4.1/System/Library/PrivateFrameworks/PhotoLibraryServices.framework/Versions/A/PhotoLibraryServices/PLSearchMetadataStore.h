@class NSString;

@interface PLSearchMetadataStore : NSObject {
    NSString *_storePath;
}

- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (id)currentSearchMetadata;
- (void)deleteStore;
- (void)updateSearchMetadataTo:(id)a0;

@end
