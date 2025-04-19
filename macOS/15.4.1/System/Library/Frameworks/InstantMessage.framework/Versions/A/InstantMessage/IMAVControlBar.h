@interface IMAVControlBar : NSObject

+ (id)sharedControlBar;

- (id)_dictionaryRepresentation;
- (id)controls;
- (void)addControl:(id)a0;
- (void)removeControl:(id)a0;
- (void)removeAllControls;

@end
