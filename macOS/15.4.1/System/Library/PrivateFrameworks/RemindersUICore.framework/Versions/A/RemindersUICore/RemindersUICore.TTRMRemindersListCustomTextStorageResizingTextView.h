@interface RemindersUICore.TTRMRemindersListCustomTextStorageResizingTextView : RemindersUICore.TTRMResizingTextView {
    void /* unknown type, empty encoding */ styleTypingAttributeState;
    void /* unknown type, empty encoding */ supportsStyling;
    void /* unknown type, empty encoding */ reminderTextStorage;
    void /* unknown type, empty encoding */ tokenInteraction;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setSelectedRanges:(id)a0 affinity:(unsigned long long)a1 stillSelecting:(BOOL)a2;
- (void)toggleBold:(id)a0;
- (void)toggleItalics:(id)a0;
- (void)toggleUnderline:(id)a0;
- (void)adoptForeignHashtag:(id)a0;
- (void)applyBulletedListStyle:(id)a0;
- (void)applyDashedListStyle:(id)a0;
- (void)applyOrderedListStyle:(id)a0;
- (void)convertTextToHashtag:(id)a0;
- (void)removeHashtagAttribute:(id)a0;
- (void)removeHashtagAttributedText:(id)a0;

@end
