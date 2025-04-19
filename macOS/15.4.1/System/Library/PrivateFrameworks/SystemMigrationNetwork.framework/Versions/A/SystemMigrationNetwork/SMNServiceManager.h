@class NSString;

@interface SMNServiceManager : NSObject {
    struct AuthorizationOpaqueRef { } *_authRef;
    NSString *_label;
    unsigned char _persistent;
    unsigned char _suspended;
}

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)resume;
- (BOOL)suspend;
- (id)initWithLabel:(id)a0;

@end
