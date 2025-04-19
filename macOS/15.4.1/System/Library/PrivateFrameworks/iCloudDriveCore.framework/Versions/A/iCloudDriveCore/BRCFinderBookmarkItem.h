@interface BRCFinderBookmarkItem : BRCDocumentItem

- (BOOL)isFinderBookmark;
- (id)asShareableItem;
- (BOOL)isShareableItem;
- (id)asFinderBookmark;
- (id)documentRecordID;

@end
