@class NSString;

@interface NSFileWatcherObservations : NSObject {
    BOOL _attributesChanged;
    BOOL _contentsChanged;
    BOOL _deleted;
    BOOL _moved;
    NSString *_lastObservedPath;
    BOOL _didResetPath;
    NSString *_path;
}

- (void)dealloc;
- (id)description;
- (void)notifyObserver:(id /* block */)a0;
- (void)addAnnouncedMoveToPath:(id)a0;
- (void)addAttributeChange;
- (void)addContentsChange;
- (void)addDeletion;
- (void)addDetectedMoveToPath:(id)a0;
- (id)initWithPath:(id)a0;

@end
