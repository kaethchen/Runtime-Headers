@class NSString;

@interface AOSUIWalrusRecoveryKeyRemovalActionHandler : NSObject <AOSUIAccountContactPromptActionHandler>

@property (nonatomic) BOOL hasRecoveryContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWhenAccountHasRecoveryContact:(BOOL)a0;
- (void)_dismiss:(id)a0;
- (void)_dismissAndShowRecoveryContactFlow:(id)a0;
- (void)doPrimaryAction:(id)a0;
- (void)doSecondaryAction:(id)a0;

@end
