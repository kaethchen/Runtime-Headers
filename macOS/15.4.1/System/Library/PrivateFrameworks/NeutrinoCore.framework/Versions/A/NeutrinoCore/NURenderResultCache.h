@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NURenderResultCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_cache;
}

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (void)flush;
- (id)resultForJob:(id)a0;
- (void)setResult:(id)a0 forJob:(id)a1;

@end
