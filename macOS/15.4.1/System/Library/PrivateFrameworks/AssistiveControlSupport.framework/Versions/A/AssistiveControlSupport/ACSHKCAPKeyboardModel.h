@class NSMutableDictionary, NSMutableArray;

@interface ACSHKCAPKeyboardModel : NSObject

@property (nonatomic) double minX;
@property (nonatomic) double minY;
@property (nonatomic) double totalKeyWidth;
@property (nonatomic) double totalKeyHeight;
@property (retain) NSMutableDictionary *keyMapping;
@property (readonly) struct CGSize { double width; double height; } size;
@property (retain) NSMutableArray *keys;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addKey:(id)a0;
- (id)_keyForCode:(unsigned long long)a0;

@end
