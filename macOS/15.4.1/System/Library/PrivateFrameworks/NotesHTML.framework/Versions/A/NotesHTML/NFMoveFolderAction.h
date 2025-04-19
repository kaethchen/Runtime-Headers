@class NFFolder;

@interface NFMoveFolderAction : NFFolderAction

@property (retain, nonatomic) NFFolder *originalParent;

- (id)compactDescription;

@end
