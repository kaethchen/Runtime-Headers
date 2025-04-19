@interface IMDaemonCoreBridgeImpl : NSObject

+ (BOOL)isExpectedChatIDForItem:(id)a0 chatID:(id)a1;
+ (void)updateTransfer:(id)a0;
+ (void)addItem:(id)a0 toParentChatID:(id)a1 updatedLastMessageCount:(unsigned long long)a2;
+ (void)addTransfer:(id)a0 forGUID:(id)a1;
+ (id)chatIdentitiesForMessageWithGUIDs:(id)a0;
+ (id)ckRecordWithT1Info:(id)a0;
+ (id)ckRecordWithT2Info:(id)a0;
+ (id)ckRecordWithT3Info:(id)a0;
+ (id)createMessageItemWithRecordRef:(struct _IMDMessageRecordStruct { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; long long x1; struct __CFArray *x2; struct _IMDHandleRecordStruct *x3; struct _IMDHandleRecordStruct *x4; struct __CFArray *x5; struct __CFDictionary *x6; } *)a0 handle:(id)a1;
+ (id)fileTransferForGUID:(id)a0;
+ (id)fileTransferWithGUID:(id)a0;
+ (void)generatePreviewForTransfer:(id)a0;
+ (void)handleMessageUpdateWithCKRecord:(id)a0;
+ (BOOL)hasFinishedAssetDownloadSync;
+ (BOOL)isBackwardCompatibilityForItem:(id)a0 parentChatID:(id)a1;
+ (BOOL)isCompatibleWithMiCForItem:(id)a0;
+ (void)moveMessagePartForGUID:(id)a0 deleteDate:(id)a1 partBody:(id)a2;
+ (id)primaryAccountCountryCode;
+ (BOOL)registerGuid:(id)a0 forLocalURL:(id)a1;
+ (void)reloadDatabase;
+ (void)removeTransferFromBackup:(id)a0;
+ (void)setSortIDForItem:(id)a0 parentChatID:(id)a1;
+ (BOOL)shouldStoreMessageForItem:(id)a0;
+ (BOOL)storeAttachmentWithTransfer:(id)a0 withChatGUID:(id)a1;
+ (void)storeAttachmentWithTransfer:(id)a0 withMessageGUID:(id)a1;
+ (void)storeAttachmentsForMessage:(id)a0;
+ (void)updateChatUsingSyncData:(id)a0;
+ (void)updateStamp;
+ (void)updateTemporaryTransferGUIDsIfNeeded:(id)a0;

@end
