@class NSString;

@interface NENetworkAgentSessionFileHandle : NEFileHandle {
    NSString *_name;
}

@property (readonly) NSString *name;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithNetworkAgentSession:(id)a0;
- (id)initWithNetworkAgentSession:(id)a0 name:(id)a1;

@end
