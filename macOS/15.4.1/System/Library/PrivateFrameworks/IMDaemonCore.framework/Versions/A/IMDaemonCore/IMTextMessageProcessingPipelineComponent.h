@class IMDMessageStore, IMDAccount;

@interface IMTextMessageProcessingPipelineComponent : IMPipelineComponent {
    IMDAccount *_account;
    IMDMessageStore *_messageStore;
}

- (void).cxx_destruct;
- (void)_configureAccountForMessageItem:(id)a0 input:(id)a1;
- (id)_findAssociatedMessagePartTextForMessageItem:(id)a0 associatedMessageItem:(id)a1;
- (id)_findMessageItemForAssociatedMessageItem:(id)a0;
- (id)_messagePartMatchingAssociatedMessageGUID:(id)a0 associatedMessageItem:(id)a1;
- (BOOL)_shouldFindAssociatedMessagePartTextForMessageItem:(id)a0;
- (unsigned long long)computeFlagsForInput:(id)a0;
- (id)createMessageItemWithInput:(id)a0;
- (id)initWithMessageStore:(id)a0;
- (id)runIndividuallyWithInput:(id)a0;

@end
