@class EDSearchableIndexRichLinkItemMetadatum, NSString, CSSearchableItem, NSDate, EDPersistedMessageID, NSObject;
@protocol OS_os_log;

@interface EDSearchableIndexRichLinkItem : NSObject <EFLoggable, EDIndexableItem> {
    CSSearchableItem *_searchableItem;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (copy, nonatomic) NSString *richLinkPersistentID;
@property (copy, nonatomic) EDPersistedMessageID *messagePersistentID;
@property (retain, nonatomic) EDSearchableIndexRichLinkItemMetadatum *metadatum;
@property (nonatomic) BOOL requiresPreprocessing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *domainIdentifier;
@property (nonatomic) long long indexingType;
@property (readonly, nonatomic) NSDate *dateReceived;
@property (readonly, nonatomic) unsigned long long itemInstantiationTime;
@property (readonly, nonatomic) unsigned long long estimatedSizeInBytes;
@property (readonly, nonatomic) BOOL hasCompleteData;
@property (readonly, nonatomic) BOOL alwaysMarkAsIndexed;
@property (readonly, nonatomic) BOOL shouldExcludeFromIndex;
@property (readonly, nonatomic) BOOL shouldIndexImmediatelyPostPreprocessing;

+ (id)identifierForMessageID:(id)a0 richLinkID:(id)a1;
+ (id)messageIDandRichLinkIDFromRichLinkIdentifier:(id)a0;
+ (id)richLinkItemIdentifierFromSearchableItemIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)searchableItem;
- (void)preprocess;
- (id)fetchIndexableAttachments;
- (id)initWithMessageID:(id)a0 metadatum:(id)a1;
- (void)setNeedsAllAttributesIncludingDataDetectionResultsIndexingType;
- (void)setNeedsAllAttributesIndexingType;

@end
