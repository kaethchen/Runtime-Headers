@class GEOMapItemStorage;
@protocol NSObject, GEOMapItem;

@interface _GEOMapItemStorageNotificationTrampoline : NSObject {
    id<GEOMapItem> _mapItem;
    GEOMapItemStorage *_storage;
    id<NSObject> _notificationToken;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithMapItem:(id)a0 mapItemStorage:(id)a1;

@end
