@class NSMutableDictionary;

@interface NSLocalInputServer : NSInputServer {
    NSMutableDictionary *_dictionary;
}

- (void)dealloc;
- (id)mutableDictionary;
- (id)initWithDelegate:(id)a0 name:(id)a1;
- (void)setMutableDictionary:(id)a0;

@end
