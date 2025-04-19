@class NSButton, NSString, NSObject;
@protocol ICMAppTouchBarControllerDelegate;

@interface ICMAppTouchBarController : ICMBaseTouchBarController

@property (weak, nonatomic) NSObject<ICMAppTouchBarControllerDelegate> *touchBarControllerDelegate;
@property (readonly, nonatomic) NSButton *addNoteButton;
@property (readonly, nonatomic) NSButton *checklistButton;
@property (readonly, nonatomic) NSButton *deleteButton;
@property (readonly, nonatomic) NSString *addNoteCustomizationLabel;
@property (readonly, nonatomic) NSString *checklistCustomizationLabel;
@property (readonly, nonatomic) NSString *deleteCustomizationLabel;

- (void)dealloc;
- (void).cxx_destruct;
- (void)addFolderButtonPressed:(id)a0;
- (void)addNoteButtonPressed:(id)a0;
- (void)checklistButtonPressed:(id)a0;
- (void)deleteButtonPressed:(id)a0;
- (id)initWithTouchBarDelegate:(id)a0;
- (void)tableButtonPressed:(id)a0;
- (id)tableCustomizationLabel;

@end
