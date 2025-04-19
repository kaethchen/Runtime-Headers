@class WBSCopyOnWriteState;
@protocol NSCopying;

@interface WBSCopyOnWriteValue : NSObject <NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    WBSCopyOnWriteState *_state;
    id _value;
}

@property (readonly) id<NSCopying> value;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0;
- (id)initAsCopy:(id)a0;
- (void)willModify;

@end
