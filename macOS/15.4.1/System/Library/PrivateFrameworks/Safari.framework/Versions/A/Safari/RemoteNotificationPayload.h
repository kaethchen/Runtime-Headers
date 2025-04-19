@class NSArray, NSString;

@interface RemoteNotificationPayload : NSObject

@property (readonly, copy, nonatomic) NSArray *urlArguments;
@property (readonly, copy, nonatomic) NSString *alertTitle;
@property (readonly, copy, nonatomic) NSString *alertBody;
@property (readonly, copy, nonatomic) NSString *alertActionText;

- (void).cxx_destruct;
- (BOOL)_parsePayloadDictionary:(id)a0 error:(id *)a1;
- (id)initWithNotificationPayloadDictionary:(id)a0 error:(id *)a1;

@end
