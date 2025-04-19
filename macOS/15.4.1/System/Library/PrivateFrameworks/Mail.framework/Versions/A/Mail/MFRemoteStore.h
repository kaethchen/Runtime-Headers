@class NSString, MFRemoteStoreAccount;

@interface MFRemoteStore : MFLibraryStore

@property (readonly, nonatomic) MFRemoteStoreAccount *account;
@property (readonly, copy, nonatomic) NSString *URLString;

+ (id)errorDescriptionForTransferFailureMessageWithMissedMessageCount:(unsigned long long)a0 subject:(id)a1 destinationMailbox:(id)a2;

- (void)willAddMessages;
- (id)_cachedBodyForMessage:(id)a0 valueIfNotPresent:(id)a1;
- (id)_cachedHeadersForMessage:(id)a0 valueIfNotPresent:(id)a1;
- (BOOL)_shouldUpdateColorsAndAttachmentsAfterOpening;
- (void)deleteMessagesOlderThanNumberOfDays:(long long)a0 compact:(BOOL)a1;
- (void)didAddMessages;
- (void)enqueuedMessageChangesInExistingRequest;
- (void)forceResync;
- (id)messagesForMailbox:(id)a0 olderThanNumberOfDays:(long long)a1;

@end
