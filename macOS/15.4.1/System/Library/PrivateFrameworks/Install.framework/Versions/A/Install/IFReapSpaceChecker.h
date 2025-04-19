@interface IFReapSpaceChecker : NSObject

- (id)reapableFiles;
- (id)reapableSpace;
- (BOOL)willBlock;

@end
