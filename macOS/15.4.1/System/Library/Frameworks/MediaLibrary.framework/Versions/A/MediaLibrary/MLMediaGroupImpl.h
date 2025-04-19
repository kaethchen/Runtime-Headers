@class NSArray, NSDictionary, NSData, MLMediaLibrary, MLMediaGroup;

@interface MLMediaGroupImpl : NSObject

@property (nonatomic) BOOL mediaObjectsRequested;
@property (nonatomic) BOOL iconImageDataRequested;
@property (nonatomic) MLMediaLibrary *mediaLibrary;
@property (nonatomic) MLMediaGroup *parent;
@property (retain, nonatomic) NSArray *childGroups;
@property (copy, nonatomic) NSArray *mediaObjects;
@property (copy, nonatomic) NSDictionary *attributes;
@property (retain, nonatomic) NSData *iconImageData;

- (void)dealloc;

@end
