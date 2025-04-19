@class _TtC20PreviewsFoundationOS19ObjcSingleFireEvent;

@interface UVObjCSingleFireEvent : NSObject {
    _TtC20PreviewsFoundationOS19ObjcSingleFireEvent *_event;
}

@property (readonly, nonatomic) BOOL hasFired;

- (id)init;
- (void).cxx_destruct;
- (void)fire;
- (void)addObserver:(id /* block */)a0;
- (void)cancel;

@end
