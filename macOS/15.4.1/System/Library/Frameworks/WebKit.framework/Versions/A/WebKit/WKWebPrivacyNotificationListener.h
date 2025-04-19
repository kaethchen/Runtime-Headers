@interface WKWebPrivacyNotificationListener : NSObject {
    struct BlockPtr<void ()> { id /* block */ m_block; } _callback;
    long long _resourceType;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)didUpdate:(id)a0;
- (id)initWithType:(long long)a0 callback:(id /* block */)a1;

@end
