@class NSUUID, FSMessageConnection;

@interface FSTask : NSObject <NSSecureCoding, FSTaskMessageOperations>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *taskID;
@property (readonly) FSMessageConnection *connection;
@property (readonly) FSMessageConnection *connection;
@property (readonly) NSUUID *taskID;

- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)logMessage:(id)a0;
- (void)completed:(id)a0 replyHandler:(id /* block */)a1;
- (void)didCompleteWithError:(id)a0;
- (id)initWithMessageConnection:(id)a0 taskID:(id)a1;
- (void)prompt:(id)a0 replyHandler:(id /* block */)a1;
- (void)promptTrueFalse:(id)a0 replyHandler:(id /* block */)a1;

@end
