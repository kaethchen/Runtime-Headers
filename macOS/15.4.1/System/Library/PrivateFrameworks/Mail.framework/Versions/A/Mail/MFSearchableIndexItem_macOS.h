@class NSString, NSObject;
@protocol OS_os_log;

@interface MFSearchableIndexItem_macOS : EDSearchableIndexItem <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (nonatomic) BOOL requiresPreprocessing;
@property (nonatomic) BOOL loadSecondaryMetadata;
@property (nonatomic) BOOL needsBodyData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)gmailLabelsForBaseMessage:(id)a0;
+ (id)mailboxIdentifiersForBaseMessage:(id)a0;
+ (id)searchableMessageAttachmentsForBaseMessage:(id)a0 includeEncryptedBody:(BOOL)a1;
+ (id)searchableMessageUpdateForBaseMessage:(id)a0;
+ (BOOL)_shouldIncludeBodyDataFromMessageBody:(id)a0 includeEncryptedBody:(BOOL)a1;
+ (id)suggestionsSearchableItemWithMessage:(id)a0 htmlString:(id)a1 isEncrypted:(BOOL)a2 includeEncryptedBody:(BOOL)a3;

- (id)searchableItem;
- (void)preprocess;
- (id)fetchIndexableAttachments;
- (id)initWithIdentifier:(id)a0 message:(id)a1 bodyData:(id)a2 fetchBody:(BOOL)a3;
- (void)setNeedsAllAttributesIncludingDataDetectionResultsIndexingType;
- (void)setNeedsAllAttributesIndexingType;
- (BOOL)shouldIndexImmediatelyPostPreprocessing;
- (id)initWithIdentifier:(id)a0 message:(id)a1 bodyData:(id)a2 fetchBody:(BOOL)a3 loadSecondaryMetadata:(BOOL)a4;
- (id)initWithMessage:(id)a0 bodyData:(id)a1 fetchBody:(BOOL)a2 loadSecondaryMetadata:(BOOL)a3;

@end
