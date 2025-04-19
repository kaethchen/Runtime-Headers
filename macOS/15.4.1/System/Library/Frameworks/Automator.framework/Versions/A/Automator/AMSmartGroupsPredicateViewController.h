@class NSPredicate, NSPredicateEditor;

@interface AMSmartGroupsPredicateViewController : NSViewController

@property (weak) NSPredicateEditor *_editor;
@property (retain, nonatomic) NSPredicate *criteria;

- (void).cxx_destruct;
- (void)awakeFromNib;

@end
