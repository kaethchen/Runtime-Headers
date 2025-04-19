@class NSString;

@interface IDSCancelMessage : IDSMessage

@property (retain, nonatomic) NSString *fromID;
@property (retain, nonatomic) NSString *queueOneIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (long long)command;
- (id)messageBody;
- (id)initWithQueueOneIdentifier:(id)a0 fromID:(id)a1;

@end
