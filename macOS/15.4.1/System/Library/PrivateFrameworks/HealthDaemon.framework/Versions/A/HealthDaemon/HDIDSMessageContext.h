@class NSString, IDSMessageContext;

@interface HDIDSMessageContext : NSObject {
    IDSMessageContext *_context;
}

@property (readonly, copy, nonatomic) NSString *originalGUID;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMessageContext:(id)a0;

@end
