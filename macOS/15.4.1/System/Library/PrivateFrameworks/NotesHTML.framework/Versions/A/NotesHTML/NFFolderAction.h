@class NFFolder;

@interface NFFolderAction : NFOfflineAction

@property (retain, nonatomic) NFFolder *folder;
@property (retain, nonatomic) NFFolder *parent;

- (id)compactDescription;

@end
