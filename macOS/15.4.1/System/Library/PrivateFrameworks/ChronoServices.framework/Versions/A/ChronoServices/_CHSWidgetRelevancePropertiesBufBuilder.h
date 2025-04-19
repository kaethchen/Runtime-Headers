@class AFBBufferBuilder;

@interface _CHSWidgetRelevancePropertiesBufBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct WidgetRelevancePropertiesBufBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setKind:(id)a0;
- (void)setExtensionIdentity:(id)a0;
- (void)setIsDeletion:(BOOL)a0;
- (void)setLastRelevanceUpdate:(double)a0;
- (void)setRelevances:(id)a0;
- (void)setSupportsBackgroundRefresh:(BOOL)a0;

@end
