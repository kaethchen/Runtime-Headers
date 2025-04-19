@interface IMSuggestedActionsMessagePartChatItem : IMAttachmentMessagePartChatItem

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithItem:(id)a0 suggestedActionsList:(id)a1;
- (BOOL)supportsSuggestedActionsMenu;

@end
