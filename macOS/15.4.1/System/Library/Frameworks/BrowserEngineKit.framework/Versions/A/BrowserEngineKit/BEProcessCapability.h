@interface BEProcessCapability : NSObject {
    void /* unknown type, empty encoding */ inner;
}

+ (id)suspended;
+ (id)background;
+ (id)foreground;
+ (id)mediaPlaybackAndCaptureWithEnvironment:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)requestWithError:(id *)a0;

@end
