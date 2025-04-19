@interface PreviewsFoundationOS.ObjcSingleFireEvent : NSObject {
    void /* unknown type, empty encoding */ event;
}

@property (nonatomic, readonly) BOOL hasFired;

- (id)init;
- (void).cxx_destruct;
- (void)fire;
- (void)addObserver:(id /* block */)a0;
- (void)cancel;

@end
