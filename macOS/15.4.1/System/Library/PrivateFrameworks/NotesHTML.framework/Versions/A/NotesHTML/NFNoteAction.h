@class NFFolder, NFNote;

@interface NFNoteAction : NFOfflineAction

@property (retain, nonatomic) NFNote *note;
@property (retain, nonatomic) NFFolder *folder;

- (id)compactDescription;

@end
