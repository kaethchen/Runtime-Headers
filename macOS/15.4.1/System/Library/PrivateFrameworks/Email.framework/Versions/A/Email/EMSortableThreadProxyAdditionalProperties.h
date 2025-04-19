@class NSDate, NSString, NSArray, EMGeneratedSummary, EMCategory, ECMessageFlags, EMReadLater, NSIndexSet;

@interface EMSortableThreadProxyAdditionalProperties : NSObject

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

- (void).cxx_destruct;

@end
