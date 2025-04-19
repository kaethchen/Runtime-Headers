@class NSString, NSTimeZone, NSDate;

@interface CSKEvent : NSObject

@property (retain) NSDate *date;
@property unsigned long long machContinuousTimestamp;
@property int processIdentifier;
@property (retain) NSString *process;
@property unsigned long long logType;
@property (retain) NSString *subsystem;
@property (retain) NSString *category;
@property (retain) NSString *composedMessage;
@property unsigned long long activityIdentifier;
@property unsigned long long parentActivityIdentifier;
@property unsigned long long threadIdentifier;
@property (retain) NSString *sender;
@property unsigned long long timeToLive;
@property (retain) NSTimeZone *timeZone;
@property unsigned long long type;
@property unsigned long long creatorProcessUniqueIdentifier;
@property unsigned long long creatorActivityIdentifier;
@property (retain) NSString *processImagePath;
@property (retain) NSString *senderImagePath;

- (void).cxx_destruct;
- (id)initWithLogEventProxy:(id)a0;

@end
