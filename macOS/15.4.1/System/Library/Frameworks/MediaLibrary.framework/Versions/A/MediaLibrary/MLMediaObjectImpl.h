@class MLMediaLibrary, NSDictionary;

@interface MLMediaObjectImpl : NSObject

@property (nonatomic) MLMediaLibrary *mediaLibrary;
@property (copy, nonatomic) NSDictionary *attributes;
@property (nonatomic) unsigned long long mediaType;
@property (nonatomic) BOOL thumbnailURLRequested;

- (void)dealloc;

@end
