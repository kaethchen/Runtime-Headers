@class NSNumber, NSString;

@interface _AMFinderFile : _AMFinderItem

@property (copy) NSNumber *fileType;
@property (copy) NSNumber *creatorType;
@property BOOL stationery;
@property (readonly, copy) NSString *productVersion;
@property (readonly, copy) NSString *version;

@end
