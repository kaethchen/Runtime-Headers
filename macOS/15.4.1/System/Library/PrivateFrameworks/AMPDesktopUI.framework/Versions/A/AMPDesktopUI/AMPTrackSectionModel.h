@class NSArray, NSString;

@interface AMPTrackSectionModel : NSObject {
    void /* unknown type, empty encoding */ playlistItems;
    void /* unknown type, empty encoding */ title;
}

@property (nonatomic, copy) NSArray *playlistItems;
@property (nonatomic, copy) NSString *title;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;
- (id)initWithTitle:(id)a0 items:(id)a1;

@end
