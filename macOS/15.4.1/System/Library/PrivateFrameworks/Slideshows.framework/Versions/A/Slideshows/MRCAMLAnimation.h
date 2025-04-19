@class NSString, NSArray;

@interface MRCAMLAnimation : NSObject {
    double startTime;
    double duration;
    BOOL removedOnCompletion;
}

@property (copy, nonatomic) NSString *keyPath;
@property (retain, nonatomic) NSArray *keyframes;

- (void)dealloc;

@end
