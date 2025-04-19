@class NSArray, NSMutableSet, NSObject, NSMutableArray;
@protocol OS_dispatch_source;

@interface AVCaptureSynchronizedMetadataCollections : NSObject {
    NSMutableSet *_handledMetadataObjectTypes;
    NSMutableSet *_expectedMetadataObjectTypes;
    NSMutableArray *_collections;
    NSObject<OS_dispatch_source> *_emitTimer;
}

@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (readonly) BOOL readyToEmit;
@property (retain) NSObject<OS_dispatch_source> *emitTimer;
@property (readonly, copy) NSArray *metadataCollections;
@property (readonly, copy) NSArray *metadataObjects;
@property (readonly, copy) NSMutableSet *metadataObjectTypes;

- (void)dealloc;
- (void)addCollections:(id)a0;
- (id)initWithMetadataCollections:(id)a0 expectedMetadataObjectTypes:(id)a1;
- (void)skipMetadataObjectTypes:(id)a0;

@end
