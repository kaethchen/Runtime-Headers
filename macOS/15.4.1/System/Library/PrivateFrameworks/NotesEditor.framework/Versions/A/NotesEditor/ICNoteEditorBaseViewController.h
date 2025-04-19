@class ICNote, NSString;

@interface ICNoteEditorBaseViewController : NSViewController

@property (nonatomic) long long viewAppearanceState;
@property (readonly, nonatomic) long long editorIdentifier;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic, getter=isAuxiliaryEditor) BOOL auxiliaryEditor;
@property (readonly, nonatomic, getter=isEditingOnSecureScreen) BOOL editingOnSecureScreen;
@property (readonly, nonatomic, getter=isEditingOnSystemPaper) BOOL editingOnSystemPaper;
@property (retain, nonatomic) ICNote *note;
@property (readonly, nonatomic) NSString *identifierDescription;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (id)initWithIdentifier:(long long)a0 options:(unsigned long long)a1;
- (void)noteWillAppear:(id)a0;
- (void)groupActivityDidChange;
- (id)initWithIdentifier:(long long)a0 options:(unsigned long long)a1 nibName:(id)a2 bundle:(id)a3;
- (void)noteDidAppear:(id)a0;
- (void)noteDidDisappear:(id)a0;
- (void)noteWillDisappear:(id)a0;

@end
