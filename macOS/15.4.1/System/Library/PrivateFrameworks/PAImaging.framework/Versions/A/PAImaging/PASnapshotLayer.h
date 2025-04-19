@class _PASlotId;

@interface PASnapshotLayer : CALayer

@property (retain, nonatomic, setter=_setSlotId:) _PASlotId *slotId;

- (id)init;
- (void).cxx_destruct;
- (void)setContents:(id)a0;
- (id)initWithSourceLayer:(id)a0;

@end
