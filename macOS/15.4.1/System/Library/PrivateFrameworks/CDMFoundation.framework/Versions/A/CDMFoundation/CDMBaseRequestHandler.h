@class NSString, CDMServiceGraph;

@interface CDMBaseRequestHandler : NSObject {
    unsigned long long _handlerState;
    CDMServiceGraph *_serviceGraph;
    id _result;
}

@property (readonly, nonatomic) NSString *handlerId;

- (id)init;
- (void).cxx_destruct;
- (id)getError;
- (unsigned long long)getHandlerState;
- (id)getServiceGraph;
- (id)getResult;
- (id)initWithId:(id)a0 serviceGraph:(id)a1;
- (void)setHandlerState:(unsigned long long)a0;

@end
