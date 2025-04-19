@class NSObject;
@protocol OS_dispatch_queue;

@interface MEFileInfo : NSObject <NSCopying> {
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _duration;
    long long _fragmentsStatus;
}

@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (nonatomic) long long fragmentsStatus;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
