@class NSString, NSMutableArray;

@interface TSTTemporaryCollectionNode : NSObject

@property (nonatomic) struct TSCEGridDimensions { unsigned int width; unsigned int height; } dimensions;
@property (retain, nonatomic) NSMutableArray *children;
@property (retain, nonatomic) NSString *whitespaceBeforeFirstChild;
@property (retain, nonatomic) NSMutableArray *whitespaceAfterDelimiters;
@property (nonatomic) unsigned long long firstIndex;
@property (nonatomic) unsigned long long lastIndex;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
