@class NSString, PHMemory;

@interface PXRenameMemoryAction : PXPhotosAction

@property (readonly, nonatomic) PHMemory *memory;
@property (readonly, copy, nonatomic) NSString *redoTitle;
@property (readonly, copy, nonatomic) NSString *undoTitle;
@property (readonly, copy, nonatomic) NSString *redoSubtitle;
@property (readonly, copy, nonatomic) NSString *undoSubtitle;
@property (readonly, nonatomic) BOOL undoUserEdited;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (id)actionNameLocalizationKey;
- (id)initWithMemory:(id)a0 title:(id)a1 subtitle:(id)a2;

@end
