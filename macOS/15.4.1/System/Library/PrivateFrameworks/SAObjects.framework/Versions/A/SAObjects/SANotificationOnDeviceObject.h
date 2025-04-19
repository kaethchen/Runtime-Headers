@class NSString, NSNumber, NSData;

@interface SANotificationOnDeviceObject : SANotificationObject

@property (copy, nonatomic) NSString *announcementType;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSNumber *isHighlight;
@property (copy, nonatomic) NSData *request;
@property (copy, nonatomic) NSString *senderHandle;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *summary;
@property (copy, nonatomic) NSString *threadSummary;
@property (copy, nonatomic) NSString *title;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
