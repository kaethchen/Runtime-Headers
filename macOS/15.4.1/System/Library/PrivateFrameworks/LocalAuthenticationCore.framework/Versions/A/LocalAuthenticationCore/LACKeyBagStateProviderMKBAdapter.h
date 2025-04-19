@interface LACKeyBagStateProviderMKBAdapter : NSObject {
    unsigned int _userId;
}

- (long long)state;
- (id)initWithUserId:(unsigned int)a0;

@end
