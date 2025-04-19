@class RBImageQueueContents;

@interface RBImageQueueLayer : CALayer {
    struct objc_ptr<RBImageQueueContents *> { RBImageQueueContents *_p; } _queue;
}

+ (id)defaultValueForKey:(id)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)actionForKey:(id)a0;
- (void)renderInContext:(struct CGContext { } *)a0;

@end
