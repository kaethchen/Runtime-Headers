@class NSString, NSImage, NSPredicate, NSColor;

@interface MUIMailboxFilter : NSObject <MUIMailboxFilterProtocol>

@property (retain, nonatomic) NSPredicate *predicate;
@property (copy, nonatomic) NSString *iconImageName;
@property (retain, nonatomic) NSColor *iconTintColor;
@property (nonatomic) BOOL hasMailboxPredicate;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *filterDescription;
@property (retain, nonatomic) NSImage *icon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconNameForMailboxType:(long long)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initForCCMeMessages;
- (id)initForFlaggedMessages;
- (id)initForMessagesWithAttachments;
- (id)initForSender:(id)a0;
- (id)initForSmartMailboxType:(long long)a0;
- (id)initForToMeMessages;
- (id)initForTodayMessages;
- (id)initForUnreadMessages;
- (id)initForVIPMessages;
- (id)initWithAccount:(id)a0 iconFromSmartMailbox:(id)a1;
- (id)initWithType:(long long)a0 name:(id)a1 description:(id)a2 iconImageName:(id)a3 iconTintColor:(id)a4 predicate:(id)a5 hasMailboxPredicate:(BOOL)a6;
- (BOOL)isEqualToFilter:(id)a0;
- (BOOL)isEquivalentToPredicate:(id)a0;

@end
