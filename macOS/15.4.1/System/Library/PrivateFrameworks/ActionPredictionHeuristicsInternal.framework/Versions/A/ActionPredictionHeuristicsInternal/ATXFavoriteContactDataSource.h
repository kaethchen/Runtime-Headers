@class ATXHeuristicDevice;

@interface ATXFavoriteContactDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (void)favoritesWithContacts:(id)a0 callback:(id /* block */)a1;

@end
