@class NSString, NSImage, NSData, NSNumber;

@interface _AMiTunes8Artwork : _AMiTunes8Item

@property (copy) NSImage *data;
@property (copy) NSString *objectDescription;
@property (readonly) BOOL downloaded;
@property (readonly, copy) NSNumber *format;
@property long long kind;
@property (copy) NSData *rawData;

@end
