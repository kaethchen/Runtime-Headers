@class NSString, NSDictionary, MLMediaSourceImpl, MLMediaLibrary, MLMediaGroup;

@interface MLMediaSource : NSObject {
    MLMediaSourceImpl *_impl;
}

@property (copy) NSDictionary *attributes;
@property (readonly) MLMediaLibrary *mediaLibrary;
@property (readonly, copy) NSString *mediaSourceIdentifier;
@property (readonly, retain) MLMediaGroup *rootMediaGroup;

- (void)dealloc;
- (id)debugDescription;
- (void)updateAttributes:(id)a0 forMediaGroup:(id)a1;
- (id)_recursiveCreateGroups:(id)a0 parent:(id)a1;
- (void)_resetGroupAndObjectMaps;
- (void)_storeMediaGroupByIdentifier:(id)a0;
- (id)initWithMediaLibrary:(id)a0 attributes:(id)a1;
- (id)mediaGroupForIdentifier:(id)a0;
- (id)mediaGroupsForIdentifiers:(id)a0;
- (id)mediaObjectForIdentifier:(id)a0;
- (id)mediaObjectFromAttributes:(id)a0;
- (id)mediaObjectsForIdentifiers:(id)a0;
- (void)nullOutLibraryPointer;
- (void)setRootGroupAttributes:(id)a0;
- (void)setRootMediaGroup:(id)a0;
- (void)updateAttributes:(id)a0 forMediaObject:(id)a1;
- (void)xpcConnectionWasInterrupted;

@end
