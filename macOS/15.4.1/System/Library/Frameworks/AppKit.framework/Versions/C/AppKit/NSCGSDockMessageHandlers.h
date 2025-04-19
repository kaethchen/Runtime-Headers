@class NSMutableDictionary;

@interface NSCGSDockMessageHandlers : NSObject {
    NSMutableDictionary *_handlersByMessageID;
}

- (void)addHandlerForMessage:(unsigned int)a0 order:(long long)a1 block:(id)a2;
- (id)handlersForMessageID:(unsigned int)a0;

@end
