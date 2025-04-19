@class NSString, NSArray, CSAddressingViewModel, NSURL, CKShare, CSPlaceholderViewController, CKContainerSetupInfo;
@protocol CSAddParticipantsViewControllerDelegate;

@interface CSAddParticipantsViewController : NSViewController <CSAddParticipantsPublicController>

@property (retain, nonatomic) CSPlaceholderViewController *placeholderViewController;
@property (retain, nonatomic) CKShare *share;
@property (retain, nonatomic) NSArray *collaborationOptionsGroups;
@property (retain, nonatomic) CSAddressingViewModel *addressingViewModel;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) CKContainerSetupInfo *containerSetupInfo;
@property (weak, nonatomic) id<CSAddParticipantsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (BOOL)commitEditingAndReturnError:(id *)a0;
- (void)loadView;
- (void)viewDidLoad;
- (void)embedViewController:(id)a0;
- (id)initWithCKShare:(id)a0 containerSetupInfo:(id)a1 fileURL:(id)a2 collaborationOptionsGroups:(id)a3 headerImageData:(id)a4 headerTitle:(id)a5 loadingText:(id)a6 supplementaryText:(id)a7 primaryButtonText:(id)a8 secondaryButtonText:(id)a9;
- (void)dismissViewControllerWithError:(id)a0 shareURL:(id)a1 ckShare:(id)a2;
- (void)showContactPickerFromSourceRect:(id)a0;

@end
