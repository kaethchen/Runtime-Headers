@class NSString, NSDictionary, NSObject;
@protocol OS_os_log;

@interface APMessage : NSObject

@property (readonly) int messageType;
@property (readonly) NSString *messageTypeString;
@property (readonly) NSDictionary *messageData;
@property (readonly) NSObject<OS_os_log> *logHandle;
@property (readonly) int resultCode;

+ (id)stringForResult:(int)a0;
+ (id)messageWithType:(int)a0 data:(id)a1;
+ (id)stringForMessageType:(int)a0;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(int)a0 data:(id)a1;
- (id)replyWithError:(id)a0;
- (id)replyWithData:(id)a0;
- (id)replyWithErrorCode:(long long)a0 andFailureReason:(id)a1;
- (id)replyWithErrorCode:(long long)a0 andFormat:(id)a1;
- (id)replyWithSuccess;
- (void)updateMessageDataWithEntriesFromDictionary:(id)a0;

@end
