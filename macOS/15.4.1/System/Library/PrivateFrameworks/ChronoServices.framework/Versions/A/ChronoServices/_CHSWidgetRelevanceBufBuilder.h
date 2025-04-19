@class AFBBufferBuilder;

@interface _CHSWidgetRelevanceBufBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct WidgetRelevanceBufBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setIntentReference:(id)a0;
- (void)setAttributeKey:(id)a0;

@end
