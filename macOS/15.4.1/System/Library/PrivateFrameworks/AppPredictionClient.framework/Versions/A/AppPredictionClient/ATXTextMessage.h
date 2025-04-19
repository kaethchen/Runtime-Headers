@class NSString, NSArray, ATXNamedHandle, NSDate;

@interface ATXTextMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *messageID;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSDate *dateReceived;
@property (readonly, nonatomic) NSString *threadID;
@property (readonly, nonatomic) ATXNamedHandle *sender;
@property (readonly, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) NSString *subject;
@property (readonly, nonatomic) NSString *body;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMessageID:(id)a0 bundleID:(id)a1 dateReceived:(id)a2 threadID:(id)a3 sender:(id)a4 recipients:(id)a5 subject:(id)a6 body:(id)a7;

@end
