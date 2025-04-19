@class NSString, NSMutableString;

@interface IMAPCommand : NSObject

@property (readonly) BOOL alwaysAllowToComplete;
@property (readonly) BOOL completedSuccessfully;
@property (readonly) BOOL shouldSendAgainOnError;
@property (readonly) long long minRequiredConnectionState;
@property (readonly) long long maxAllowedConnectionState;
@property (readonly) long long composition;
@property (readonly, copy) NSString *activityString;
@property (readonly, copy) NSString *detailsString;
@property (readonly, copy, nonatomic) NSString *shallowDescription;
@property (readonly, copy, nonatomic) NSMutableString *simpleDescriptionString;
@property long long completionState;

+ (id)IMAPNeedsLiteralCharacterSet;
+ (id)_IMAPNeedsQuoteCharacterSet;
+ (id)newIMAPQuotedString:(id)a0;
+ (id)newIMAPStringForMailboxName:(id)a0;

- (id)description;
- (void)cleanupAfterCompletion;
- (BOOL)executeOnConnection:(id)a0;

@end
