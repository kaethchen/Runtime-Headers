@class NSString, NSDictionary, NSDate;

@interface FTMutableRecentsItem : FTRecentsItem

@property (copy, nonatomic) NSString *localizedSubtitle;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedSenderIdentityTitle;
@property (retain, nonatomic) NSDate *date;
@property (copy, nonatomic) NSDictionary *handlesToContacts;

@end
