@class NSArray, NSMutableArray;

@interface WMWindowTransaction : NSObject {
    NSMutableArray *_actions;
}

@property (readonly, nonatomic) NSArray *actions;

- (id)init;
- (void).cxx_destruct;
- (void)addAction:(id)a0;

@end
