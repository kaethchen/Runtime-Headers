@class NSString, NSArray, NSData, NSNumber;

@interface MTRMessagesClusterMessageStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSData *messageID;
@property (copy, nonatomic) NSNumber *priority;
@property (copy, nonatomic) NSNumber *messageControl;
@property (copy, nonatomic) NSNumber *startTime;
@property (copy, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSString *messageText;
@property (copy, nonatomic) NSArray *responses;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
