@class NSMutableDictionary;

@interface PLDuplicateDetectorLivePhotoContext : NSObject {
    NSMutableDictionary *_container;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addStableHash:(id)a0 contextData:(id)a1;
- (BOOL)hasStableHash:(id)a0 contextData:(id)a1;

@end
