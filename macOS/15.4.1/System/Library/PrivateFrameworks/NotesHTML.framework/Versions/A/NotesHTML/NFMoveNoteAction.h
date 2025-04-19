@class NFFolder;

@interface NFMoveNoteAction : NFNoteAction

@property (retain, nonatomic) NFFolder *originalFolder;

- (id)compactDescription;

@end
