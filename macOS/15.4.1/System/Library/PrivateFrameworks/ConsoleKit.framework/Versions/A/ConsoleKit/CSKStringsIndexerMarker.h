@interface CSKStringsIndexerMarker : NSObject

@property (nonatomic) unsigned long long row;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (id)init;

@end
