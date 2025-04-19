@class NSArray, NSMutableArray;
@protocol SFUILoadedMetadataCollectionDelegate;

@interface SFUILoadedMetadataCollection : NSObject

@property (copy, nonatomic) NSArray *loadedMetadatas;
@property (copy, nonatomic) NSArray *loadedSerializedMetadatas;
@property (copy, nonatomic) NSMutableArray *headerMetadataObservers;
@property (readonly, copy, nonatomic) NSArray *metadatas;
@property (weak, nonatomic) id<SFUILoadedMetadataCollectionDelegate> delegate;

- (void).cxx_destruct;
- (void)_load;
- (void)_didFinishLoading;
- (void)_listenForMetadataChanges;
- (void)_metadataDidChange:(id)a0;
- (id)initWithMetadatas:(id)a0;

@end
