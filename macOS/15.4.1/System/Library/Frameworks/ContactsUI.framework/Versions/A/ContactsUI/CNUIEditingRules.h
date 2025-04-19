@interface CNUIEditingRules : NSObject

@property (readonly, nonatomic) BOOL allowNoteEditingOutsideOfEditMode;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithAllowNoteEditingOutsideOfEditMode:(BOOL)a0;

@end
