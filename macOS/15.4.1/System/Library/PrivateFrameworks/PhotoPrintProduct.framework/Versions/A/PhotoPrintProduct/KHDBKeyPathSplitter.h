@class KHDBLockedDictionary;

@interface KHDBKeyPathSplitter : NSObject {
    KHDBLockedDictionary *_keyPathToFirstComponent;
    KHDBLockedDictionary *_keyPathToLastComponent;
}

- (void)dealloc;
- (id)init;
- (id)firstComponentForKeyPath:(id)a0;
- (id)lastComponentForKeyPath:(id)a0;

@end
