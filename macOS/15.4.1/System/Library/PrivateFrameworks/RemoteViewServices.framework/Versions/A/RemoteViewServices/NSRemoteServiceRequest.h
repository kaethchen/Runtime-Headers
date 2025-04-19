@interface NSRemoteServiceRequest : NSRemoteServiceMessage

@property (readonly) unsigned long long requestType;
@property (copy) id /* block */ replyHandler;

- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (void)setRequestType:(unsigned long long)a0;

@end
