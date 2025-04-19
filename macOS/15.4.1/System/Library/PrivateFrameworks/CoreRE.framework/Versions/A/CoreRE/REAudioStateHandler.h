@interface REAudioStateHandler : NSObject {
    unsigned long long osStateHandle;
}

- (void)dealloc;
- (void)invalidate;
- (id)initWithTitle:(id)a0 block:(id /* block */)a1;

@end
