@class NSDate, NSString, NSArray, EMGeneratedSummary, EMCategory, EMThreadObjectID, ECMessageFlags, EMReadLater, EMSortableThreadProxyAdditionalProperties, NSIndexSet;

@interface EMSortableThreadProxy : NSObject <EFPubliclyDescribable>

@property (retain, nonatomic) EMSortableThreadProxyAdditionalProperties *properties;
@property (retain) NSDate *displayDate;
@property (nonatomic) long long businessID;
@property (copy, nonatomic) NSString *businessLogoID;
@property (retain, nonatomic) EMCategory *category;
@property (retain) EMReadLater *readLater;
@property (retain) NSDate *sendLaterDate;
@property (nonatomic) unsigned long long numberOfMessagesInThread;
@property (nonatomic) long long displayMessageGlobalID;
@property (nonatomic) BOOL hasUnflagged;
@property (nonatomic) BOOL isVIP;
@property (nonatomic) BOOL isBlocked;
@property (nonatomic) BOOL hasAttachments;
@property (nonatomic) BOOL isAuthenticated;
@property (nonatomic) BOOL allowAuthenticationWarning;
@property (copy, nonatomic) NSArray *senderList;
@property (copy, nonatomic) NSArray *toList;
@property (copy, nonatomic) NSArray *ccList;
@property (retain, nonatomic) ECMessageFlags *flags;
@property (copy, nonatomic) NSIndexSet *flagColors;
@property (retain, nonatomic) NSArray *mailboxObjectIDs;
@property (retain, nonatomic) EMGeneratedSummary *generatedSummary;
@property (readonly, copy, nonatomic) EMThreadObjectID *objectID;
@property (retain) id primarySortValue;
@property (retain) id secondarySortValue;
@property (retain) NSDate *date;
@property (readonly) long long conversationID;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)_copySortPropertiesForDescriptors:(id)a0 thread:(id)a1;
- (id)_setValueFromThreadAndReturnIfChanged:(id)a0 keyPath:(id)a1 isPrimary:(BOOL)a2;
- (id)_sortValueForRawValue:(id)a0 keyPath:(id)a1;
- (id)_targetForSelector:(SEL)a0;
- (id)calculateChangeFromThread:(id)a0;
- (id)initWithThread:(id)a0 originatingQuery:(id)a1;
- (void)updateFromThread:(id)a0 addingAdditionalInformation:(BOOL)a1 query:(id)a2;

@end
