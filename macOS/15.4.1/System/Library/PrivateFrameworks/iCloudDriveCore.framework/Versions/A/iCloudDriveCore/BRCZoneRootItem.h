@interface BRCZoneRootItem : BRCDirectoryItem <BRCFSRooted>

- (id)extendedAttributes;
- (id)parentItemID;
- (BOOL)isUserVisible;
- (id)initWithZoneRootItemID:(id)a0 session:(id)a1;
- (BOOL)isShareableItem;
- (id)asFSRoot;
- (BOOL)isDirectoryFault;
- (BOOL)isFSRoot;
- (BOOL)isZoneRoot;
- (unsigned char)itemScope;
- (id)parentItemOnFS;
- (BOOL)saveToDB;
- (id)st;

@end
