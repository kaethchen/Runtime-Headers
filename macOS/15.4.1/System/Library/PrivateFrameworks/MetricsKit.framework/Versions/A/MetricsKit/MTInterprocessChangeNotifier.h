@class NSString;

@interface MTInterprocessChangeNotifier : NSObject {
    NSString *_identifier;
    int _token;
}

+ (void)notify:(id)a0;
+ (id)fullIdentifier:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)stop;
- (void)notify;
- (id)initWithIdentifier:(id)a0 onChange:(id /* block */)a1;

@end
