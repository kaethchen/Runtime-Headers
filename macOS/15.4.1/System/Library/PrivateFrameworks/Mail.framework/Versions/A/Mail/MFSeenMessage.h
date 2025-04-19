@class NSString, NSDate;

@interface MFSeenMessage : NSManagedObject

@property (retain, nonatomic) NSDate *dateSeen;
@property (copy, nonatomic) NSString *messageID;
@property (nonatomic) BOOL shouldDeleteFromServer;
@property (nonatomic) BOOL isOnServer;

+ (BOOL)automaticallyNotifiesObserversOfAccount;
+ (BOOL)automaticallyNotifiesObserversOfDateSeen;
+ (BOOL)automaticallyNotifiesObserversOfIsOnServer;
+ (BOOL)automaticallyNotifiesObserversOfMessageID;
+ (BOOL)automaticallyNotifiesObserversOfShouldDeleteFromServer;

- (void)setAccount:(id)a0;

@end
