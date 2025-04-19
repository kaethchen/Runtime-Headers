@interface KHDBMessageOptions : NSObject {
    unsigned long long m_returnType;
    unsigned long long m_numberOfArguments;
}

+ (void)initialize;
+ (id)messageOptionsForCount:(unsigned long long)a0 returnType:(unsigned long long)a1;
+ (id)newMessageOptionsForCount:(unsigned long long)a0 returnType:(unsigned long long)a1;

- (unsigned long long)numberOfArguments;
- (unsigned long long)returnType;
- (id)initWithReturnType:(unsigned long long)a0 numberOfArguments:(unsigned long long)a1;

@end
