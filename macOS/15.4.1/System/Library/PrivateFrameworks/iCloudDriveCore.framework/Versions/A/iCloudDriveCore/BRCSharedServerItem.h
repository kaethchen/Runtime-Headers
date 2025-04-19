@class BRCServerStatInfo;

@interface BRCSharedServerItem : BRCServerItem {
    BRCServerStatInfo *_aliasDerivedStructureForDescription;
}

- (void).cxx_destruct;
- (id)aliasDerivedStructure;
- (id)aliasDerivedStructureForDescription;
- (id)asSharedItem;
- (id)fallbackParentAppLibraryOnFS;
- (id)fallbackParentItemIDOnFS;
- (id)fallbackParentItemOnFS;
- (id)fallbackParentServerItemOnFS;
- (BOOL)isSharedToMeChildItem;
- (BOOL)isSharedToMeTopLevelItem;
- (id)originalSt;
- (id)parentItemIDOnFS;
- (id)parentItemOnFS;
- (id)parentLocalItemOnFS;
- (id)parentZoneOnFS;
- (id)st;

@end
