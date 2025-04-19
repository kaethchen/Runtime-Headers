@class NSURL, SFAuthorization, NSArray;
@protocol LROperationDelegate;

@interface LROperation : NSObject {
    id _internal;
}

@property (copy) NSURL *url;
@property int flags;
@property (retain) SFAuthorization *auth;
@property id<LROperationDelegate> delegate;
@property (readonly) NSArray *pathsNeedingRepair;
@property (readonly) unsigned long long pathsNeedingRepairCount;

+ (id)alloc;

- (void)invalidate;
- (void)cancel;
- (void)beginRepair;

@end
