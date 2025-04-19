@interface FPLoggerScope : NSObject {
    unsigned long long section;
}

- (id)init;
- (id)enter;
- (id)leave;
- (id)adopt;
- (id)fork;

@end
