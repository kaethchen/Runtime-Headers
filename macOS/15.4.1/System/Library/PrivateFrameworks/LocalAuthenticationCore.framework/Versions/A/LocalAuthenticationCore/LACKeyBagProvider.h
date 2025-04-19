@class NSMutableDictionary;

@interface LACKeyBagProvider : NSObject {
    NSMutableDictionary *_userKeybags;
}

@property (class, readonly, nonatomic) LACKeyBagProvider *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)keybagForUserId:(unsigned int)a0;

@end
