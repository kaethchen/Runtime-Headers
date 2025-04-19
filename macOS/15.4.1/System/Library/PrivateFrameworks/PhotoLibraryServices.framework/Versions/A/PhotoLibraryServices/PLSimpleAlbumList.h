@class NSOrderedSet, NSString;

@interface PLSimpleAlbumList : NSObject <PLAssetContainerList>

@property (retain, nonatomic) NSOrderedSet *containers;
@property (readonly, nonatomic) unsigned long long containersCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)managedObjectContext;
- (id)photoLibrary;
- (id)initWithAssetContainers:(id)a0;
- (BOOL)canEditContainers;
- (id)containersRelationshipName;
- (id)initWithAssetContainer:(id)a0;

@end
