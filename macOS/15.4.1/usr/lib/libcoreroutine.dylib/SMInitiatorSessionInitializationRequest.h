@class NSUUID, SMConversation, NSDate;

@interface SMInitiatorSessionInitializationRequest : NSObject

@property (readonly, nonatomic) NSUUID *sessionID;
@property (readonly, nonatomic) SMConversation *conversation;
@property (readonly, nonatomic) id /* block */ handler;
@property (readonly, nonatomic) NSDate *startDate;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0 conversation:(id)a1 handler:(id /* block */)a2;

@end
