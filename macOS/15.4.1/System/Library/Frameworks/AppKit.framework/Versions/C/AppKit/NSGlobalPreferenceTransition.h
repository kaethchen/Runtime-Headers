@interface NSGlobalPreferenceTransition : NSObject {
    id /* block */ _completionBlock;
}

+ (id)localTransition;
+ (id)transition;

- (void).cxx_destruct;
- (id)initTransition;
- (void)postChangeNotification:(unsigned long long)a0 completionHandler:(id /* block */)a1;

@end
