@class NSString, NSOperationQueue;

@interface KHImageUpscaler : NSObject <KHImageUpscalingProtocol> {
    NSOperationQueue *tilingQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (struct CGImage { } *)createUpscaledImageWithSource:(struct CGImage { } *)a0 forSize:(struct CGSize { double x0; double x1; })a1;

@end
