@class NSString;

@interface FSAgentClientDelegate : NSObject <FSAgentHostXPC>

@property (copy) id /* block */ instanceDeathHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)instanceExited:(id)a0 instanceUUID:(id)a1;

@end
