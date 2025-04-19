@class NSRegularExpression, NSDirectoryEnumerator, NSString, NSObject;
@protocol OS_os_log, MFUpdateAttachmentsWithAttachmentIDUpgradeStepDataSource;

@interface MFUpdateAttachmentsWithAttachmentIDUpgradeStep : MFLibraryUpgradeStep <MFUpdateAttachmentsWithAttachmentIDUpgradeStepDataSource, EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) NSDirectoryEnumerator *directoryEnumerator;
@property (retain, nonatomic) NSRegularExpression *attachmentFileRegularExpression;
@property (weak, nonatomic) id<MFUpdateAttachmentsWithAttachmentIDUpgradeStepDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)targetVersion;

- (void).cxx_destruct;
- (void)_insertAttachmentEntryWithConnection:(id)a0 messageIdentifier:(id)a1 attachmentID:(id)a2 name:(id)a3;
- (void)_migrateDataFromOldAttachmentsTableUsingConnection:(id)a0 dataSource:(id)a1;
- (id)fileURLEnumeratorForUpdateAttachmentsWithAttachmentIDUpgradeStep:(id)a0;
- (void)processAttachmentsIfNecessaryAtFileURL:(id)a0 isDirectory:(BOOL)a1 skipDescendantsBlock:(id /* block */)a2 resultsBlock:(id /* block */)a3;
- (void)runWithRowIDsNeedingConversationRecalculation:(id)a0;
- (id /* block */)skipDescendantsBlockForUpdateAttachmentsWithAttachmentIDUpgradeStep:(id)a0;
- (BOOL)updateAttachmentsWithAttachmentIDUpgradeStep:(id)a0 isDirectoryForFileURL:(id)a1;

@end
