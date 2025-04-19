@class TKSharedResourceSlot;

@interface TKSharedResource : NSObject {
    TKSharedResourceSlot *_slot;
}

@property (readonly, nonatomic) id object;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithSlot:(id)a0;

@end
