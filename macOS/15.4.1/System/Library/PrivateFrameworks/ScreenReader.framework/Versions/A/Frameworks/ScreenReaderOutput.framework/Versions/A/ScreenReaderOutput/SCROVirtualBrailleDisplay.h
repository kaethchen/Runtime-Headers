@class NSString, SCROVirtualBrailleDriver;

@interface SCROVirtualBrailleDisplay : SCROBrailleDisplay <SCROVirtualBrailleDriverDelegate> {
    long long _mainSize;
    NSString *_mainCells;
    SCROVirtualBrailleDriver *_virtualDriver;
}

+ (id)systemDisplay;

- (void).cxx_destruct;
- (id)_initWithMainSize:(long long)a0 ioElement:(id)a1;
- (void)_simulateKeypressWithMask:(unsigned int)a0;
- (void)didSetMainCells:(id)a0;
- (id)initWithMainSize:(long long)a0;
- (id)mainCells;
- (long long)mainSize;
- (void)pressKeyChord:(unsigned long long)a0;
- (void)pressNext;
- (void)pressPanLeft;
- (void)pressPanRight;
- (void)pressPrevious;
- (void)pressRouterWithIndex:(unsigned long long)a0;

@end
