@class NSArray, AAPSyncState, NSObject;
@protocol OS_dispatch_queue;

@interface AAPSyncMetaDataSource : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy, nonatomic) NSArray *metaData;
@property (readonly, copy, nonatomic) AAPSyncState *state;

+ (id)_createSourceInfoForLastState:(id)a0 startAnchor:(id)a1 keyAnchor:(id)a2 validity:(id)a3 configuration:(id)a4;
+ (id)projectedStateForLastState:(id)a0 startAnchor:(id)a1 keyAnchor:(id)a2 validity:(id)a3;

- (void).cxx_destruct;
- (id)initWithLastState:(id)a0 startAnchor:(id)a1 keyAnchor:(id)a2 validity:(id)a3 configuration:(id)a4 observer:(id)a5;
- (void)waitUntilReady;

@end
