@interface VUIDocumentUIConfigurationModal : VUIDocumentUIConfiguration

@property (nonatomic, getter=isModalOverModalAllowed) BOOL modalOverModalAllowed;
@property (nonatomic, getter=shouldPresentOnPresentingViewController) BOOL presentOnPresentingVC;
@property (nonatomic) BOOL hasMaterialBackground;

@end
