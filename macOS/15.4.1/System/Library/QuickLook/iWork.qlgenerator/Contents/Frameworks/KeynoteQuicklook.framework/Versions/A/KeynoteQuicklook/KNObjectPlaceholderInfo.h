@interface KNObjectPlaceholderInfo : KNPlaceholderInfo

- (int)kind;
- (id)typeName;
- (Class)layoutClass;
- (Class)repClass;
- (BOOL)displaysInstructionalText;
- (id)instructionalText;
- (BOOL)supportsHyperlinks;
- (BOOL)canAddCaption;
- (BOOL)canAddTitle;
- (BOOL)canRemoveCaption;
- (BOOL)canRemoveTitle;
- (id)initWithKNPlaceholderInfo:(id)a0;

@end
