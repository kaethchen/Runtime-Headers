@class NSString, NSMutableArray, NSLock;
@protocol SCROVirtualBrailleDriverDelegate;

@interface SCROVirtualBrailleDriver : NSObject <SCROBrailleDriverProtocol> {
    id<SCROVirtualBrailleDriverDelegate> _delegate;
    long long _mainSize;
    NSString *_mainCells;
    NSMutableArray *_enqueuedEvents;
    NSLock *_eventLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)interfaceVersion;
- (BOOL)isInputEnabled;
- (id)modelIdentifier;
- (int)brailleInputMode;
- (void)enqueueDot:(long long)a0 down:(BOOL)a1;
- (void)enqueuePan:(BOOL)a0 down:(BOOL)a1;
- (void)enqueueRouter:(unsigned long long)a0 down:(BOOL)a1;
- (void)enqueueSpaceWithDown:(BOOL)a0;
- (id)getInputEvents;
- (id)initWithMainSize:(long long)a0 delegate:(id)a1;
- (BOOL)isDriverLoaded;
- (BOOL)isSleeping;
- (int)loadDriverWithIOElement:(id)a0;
- (long long)mainSize;
- (BOOL)postsKeyboardEvents;
- (BOOL)setMainCells:(const char *)a0 length:(long long)a1;
- (BOOL)setStatusCells:(const char *)a0 length:(long long)a1;
- (long long)statusSize;
- (BOOL)supportsBlinkingCursor;
- (BOOL)unloadDriver;

@end
